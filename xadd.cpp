#include <iostream>
#include <time.h>

// incとxaddとlock xaddの速度比較

int inc1(int n) {
  int r;
  asm volatile(
      ".intel_syntax noprefix\n"
      "inc eax"
      : "=a"(r)
      : "a"(n));
  return r;
}

int inc2(int n) {
  int r = n;
  asm volatile(
      ".intel_syntax noprefix\n"
      "inc dword ptr [rax]"
      : 
      : "a"(&r));
  return r;
}

int xadd1(int n) {
  int r;
  asm volatile(
      ".intel_syntax noprefix\n"
      "mov  ecx, 1\n"
      "xadd eax, ecx"
      : "=a"(r)
      : "a"(n));
  return r;
}

int xadd2(int n) {
  int r = n;
  asm volatile(
      ".intel_syntax noprefix\n"
      "mov  ecx, 1\n"
      "xadd dword ptr [rax], ecx"
      :
      : "a"(&r));
  return r;
}

int xaddl(int n) {
  int r = n;
  asm volatile(
      ".intel_syntax noprefix\n"
      "mov  ecx, 1\n"
      "lock xadd dword ptr [rax], ecx"
      :
      : "a"(&r));
  return r;
}

void test(int (*f)(int), const char* name) {
  const auto MAX = 100000 * 10000;
  auto n = 0;
  auto s = clock();

  for (auto i = 0; i < MAX; ++i)
    n = f(n);

  auto e = static_cast<double>(clock() - s) / CLOCKS_PER_SEC * 1000.0;
  std::cout << name << ": " << e << " elapsed(ms), n = " << n << std::endl;
}

int main(void) {
  test(inc1, "inc1");
  test(inc2, "inc2");
  test(xadd1, "xadd1");
  test(xadd2, "xadd2");
  test(xaddl, "xaddl");

  return 0;
}

