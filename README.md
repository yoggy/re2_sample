re2_sample
========
re2 regular expression library sample program.

re2 - an efficient, principled regular expression library
* http://code.google.com/p/re2/

compile
========
<pre>
$ wget http://re2.googlecode.com/files/re2-20130622.tgz
$ tar xvfz re2-20130622.tgz
$ cd re2
$ make
$ sudo make isntall
$ cd ..
$ git clone https://github.com/yoggy/re2_sample.git
$ cd re2_sample
$ cmake . 
$ make
</pre>

example
========

<pre>
$ ./re2_sample
usage : ./r2_sample [regular expression] [target string]

$ ./re2_sample abc ABCDEFabcdef
re_str=abc, target_str=ABCDEFabcdef, match=true

$ ./re2_sample aaa ABCDEFabcdef
re_str=aaa, target_str=ABCDEFabcdef, match=false

$ ./re2_sample "A.*a" ABCDEFabcdef
re_str=A.*a, target_str=ABCDEFabcdef, match=true

$ ./re2_sample "[AB][CD]" ABCDEFabcdef
re_str=[AB][CD], target_str=ABCDEFabcdef, match=true

$ ./re2_sample "[AB][EF]" ABCDEFabcdef
re_str=[AB][EF], target_str=ABCDEFabcdef, match=false

$ ./re2_sample "\x41\x42\x43\x44" ABCDEFabcdef
re_str=\x41\x42\x43\x44, target_str=ABCDEFabcdef, match=true

$ ./re2_sample "\x41\x42\x43\x46" ABCDEFabcdef
re_str=\x41\x42\x43\x46, target_str=ABCDEFabcdef, match=false
</pre>

