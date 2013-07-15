//
// re2_quote_meta.cpp - re2 library sample
//
//	re2 : http://code.google.com/p/re2/
//
#include <stdlib.h>
#include <string>
#include <iostream>
#include <re2/re2.h>

void usage()
{
	std::cerr << "usage : ./re2_quote_meta [regular expression]" << std::endl;
	exit(1);
}

int main(int argc, char *argv[])
{
	if (argc != 2) usage();

	std::string re_str         = argv[1];
	std::string quote_meta_str = RE2::QuoteMeta(re_str);

	std::cout << "re_str=" << re_str << ", quote_meta_str=" << quote_meta_str << std::endl;

	return 0;
}

