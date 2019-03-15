#pragma once
#include "atm.h"

class Money
{
public:
	Money(aINT dollars);
	~Money();

	Money(Money toCopy);
	std::string toString();
	void add(Money amountToAdd);
	void subtract(Money amountToSubtract);
	aBOOL lessEqual(Money compareTo);
private:
	long cents;
};

