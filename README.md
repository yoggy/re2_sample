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

<pre>
$ ./re2_quote_meta
usage : ./re2_quote_meta [regular expression]

$ ./re2_quote_meta test
re_str=test, quote_meta_str=test

$ ./re2_quote_meta "*"
re_str=*, quote_meta_str=\*

$ ./re2_quote_meta "(test)"
re_str=(test), quote_meta_str=\(test\)
</pre>

<pre>
$ ./re2_replace
usage : ./r2_replace [regular expression] [target string] [replace string]

$ ./re2_replace test 123test123 TEST
re_str=test, target_str=123test123, replace_str=TEST
rv=true, result target_str=123TEST123

$ ./re2_replace ana banana ANA
re_str=ana, target_str=banana, replace_str=ANA
rv=true, result target_str=bANAna

$ ./re2_replace a.+a banana AAA
re_str=a.+a, target_str=banana, replace_str=AAA
rv=true, result target_str=bAAA
</pre>
