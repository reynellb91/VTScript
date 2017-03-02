#include "atom.h"

template<class Atm>
Atom<Atm>::Atom()
{
	type = "None";
}

template<class Atm>
Atom<Atm>::Atom(bool val)
{
	type = "Boolean";
	value = val;
}

template<class Atm>
Atom<Atm>::Atom(double val)
{
	type = "Number";
	value = val;
}

template<class Atm>
Atom<Atm>::Atom(std::string val)
{
	type = "Symbol";
	value = val;
}

template<class Atm>
std::string Atom<Atm>::getType() const 
{
	return type;
}

template<class Atm>
Atm Atom<Atm>::getValue() const 
{
	return value;
}