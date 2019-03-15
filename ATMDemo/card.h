#pragma once
#include <iostream>
#include "atm.h"

class Card
{
public:
	Card(aINT number);
	~Card();

	aINT getNumber();
private:
	aINT number;
};
