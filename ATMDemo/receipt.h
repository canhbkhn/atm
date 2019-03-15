#pragma once
#include "atm.h"
#include "card.h"
#include "transaction.h"
#include "balances.h"

class Receipt
{
public:
	Receipt(ATM atm, Card card, Transaction transaction, Balances balances);
	~Receipt();

	aINT getLines();
private:
	std::string headingPortion[100];
	std::string detailsPortion[100];
	std::string balancesPorting[100];
};