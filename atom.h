#ifndef ATOM_H
#define ATOM_H

#include <string>

typedef bool Boolean;
typedef double Number;
typedef std::string Symbol;

template<typename Atm>
class Atom 
{
public:
	Atom();

	Atom(bool val);

	Atom(double val);

	Atom(std::string val);

	std::string getType() const;

	Atm getValue() const;

private:

	std::string type;
	Atm value;

};

#include "atom.cpp"
#endif 
