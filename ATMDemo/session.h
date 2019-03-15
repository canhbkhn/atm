#pragma once
#include "atm.h"

class Session
{
	Session(ATM atm);
	~Session();

	void performSession();
	void setPIN(int pin);
};