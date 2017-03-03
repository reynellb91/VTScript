#ifndef TOKENIZE_H
#define TOKENIZE_H
#include <list>

class Tokenize 
{
public:
	Tokenize();
	std::list<string> parse(std::istream & file);
	std::list<string> parse(string);
#endif