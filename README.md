# xadd
lock xaddパフォーマンス計測

下記の経緯により測りました。  
Twitterが綺麗に貼れず‥

[1](https://twitter.com/_marony/status/1189142741617299459?ref_src=twsrc%5Etfw)

> マルチスレッドで辛いですか？<br>そもそも現状でもGCがどのスレッドから呼ばれるかはわからないですよね？</p>&mdash; まろ@関数型言語作曲機械学習勉強してない (@_marony)

[2](https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw)

> たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis)

[3](https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw)

> たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis)

## 結果
inc1: レジスタ上でinc  
inc2: メモリに対してinc  
xadd1: レジスタ上でxadd  
xadd2: メモリに対してxadd  
xaddl: メモリに対してlock xadd

### Surface Book 2(Arch Linux(VMWare Workstation) on Windows10)
第 8 世代 インテル® Core™ i7-8650U  
メモリ 16G

inc1: 3451.44 elapsed(ms), n = 1000000000  
inc2: 5726.24 elapsed(ms), n = 1000000000  
xadd1: 3558.81 elapsed(ms), n = 1000000000  
xadd2: 5830.26 elapsed(ms), n = 1000000000  
xaddl: 12280.9 elapsed(ms), n = 1000000000

### Surface Pro 3(Arch Linux)
第 4 世代 Intel® Core™ i7-4650U  
メモリ 8G

inc1: 5307.09 elapsed(ms), n = 1000000000
inc2: 8789.29 elapsed(ms), n = 1000000000
xadd1: 6881.48 elapsed(ms), n = 1000000000
xadd2: 9189.67 elapsed(ms), n = 1000000000
xaddl: 15579 elapsed(ms), n = 1000000000
[
