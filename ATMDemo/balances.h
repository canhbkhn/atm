#pragma once
#include "money.h"

class Balances
{
public:
	Balances();
	~Balance();

	void setBalances(Money total, Money available);
	Money getTotal();
	Money getAvailable();
private:
	Money total;
	Money available;
};