# xadd
lock xaddパフォーマンス計測

下記の経緯により測りました。

[](https://twitter.com/_marony/status/1189142741617299459?ref_src=twsrc%5Etfw)
> マルチスレッドで辛いですか？<br>そもそも現状でもGCがどのスレッドから呼ばれるかはわからないですよね？</p>&mdash; まろ@関数型言語作曲機械学習勉強してない (@_marony)

[](https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw)
> たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis)

[](https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw)
> たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis)

