//
// re2_sample.cpp - re2 library sample
//
//	re2 : http://code.google.com/p/re2/
//
#include <stdlib.h>
#include <string>
#include <iostream>
#include <re2/re2.h>

void usage()
{
	std::cerr << "usage : ./r2_replace [regular expression] [target string] [replace string]" << std::endl;
	exit(1);
}

int main(int argc, char *argv[])
{
	if (argc != 4) usage();

	std::string re_str     = argv[1];
	std::string target_str = argv[2];
	std::string replace_str = argv[3];

	RE2 re(re_str, RE2::Latin1);
	if (!re.ok()) {
		std::cerr << "re compile error...err=" << re.error() << std::endl;
		return -1;
	}

	std::cout << "re_str=" << re_str << ", target_str=" << target_str << ", replace_str=" << replace_str << std::endl;

	bool rv = RE2::GlobalReplace(&target_str, re, replace_str);

	std::cout << "rv=" << (rv?"true":"false") << ", result target_str=" << target_str << std::endl;

	return 0;
}

