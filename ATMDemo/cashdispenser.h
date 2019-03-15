#pragma once
#include "log.h"
#include "money.h"
#include "atm.h"

class CashDispenser
{
public:
	CashDispenser(Log log);
	~CashDispenser();

	void setInitialCash(Money intialCash);
	aBOOL checkCaskOnHand(Money amount);
	void dispenseCash(Money amount);
private:
};