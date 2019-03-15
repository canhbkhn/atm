#pragma once
#include "atm.h"
#include "card.h"
class CardReader
{
public:
	CardReader(ATM atm);
	~CardReader();

	Card readCard();
	void ejectCard();
	void retainCard();
private:
};