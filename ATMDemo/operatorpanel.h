#pragma once
#include "atm.h"
#include "money.h"

class OperatorPanel
{
public:
	OperatorPanel(ATM atm);
	~OperatorPanel();
	Money getInitialCash();
private:
	ATM atm;
};