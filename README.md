# xadd
lock xaddパフォーマンス計測

下記の経緯により測りました。

<blockquote class="twitter-tweet"><p lang="ja" dir="ltr">マルチスレッドで辛いですか？<br>そもそも現状でもGCがどのスレッドから呼ばれるかはわからないですよね？</p>&mdash; まろ@関数型言語作曲機械学習勉強してない (@_marony) <a href="https://twitter.com/_marony/status/1189142741617299459?ref_src=twsrc%5Etfw">October 29, 2019</a></blockquote> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>

<blockquote class="twitter-tweet"><p lang="ja" dir="ltr">たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis) <a href="https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw">October 29, 2019</a></blockquote> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>

<blockquote class="twitter-tweet"><p lang="ja" dir="ltr">たとえばDB Managerみたいなどの処理からも参照するオブジェクトがあると、リクエストがくるたびにDB Managerオブジェクトの参照カウンタをカウントアップ・ダウンする必要があって、そこでブロックが起きまくる気がします。</p>&mdash; きしだൠ(K8S(Kishidades)) (@kis) <a href="https://twitter.com/kis/status/1189143708651982849?ref_src=twsrc%5Etfw">October 29, 2019</a></blockquote> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>

