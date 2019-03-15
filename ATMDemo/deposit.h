#pragma once
#include "atm.h"
#include "session.h"
#include "card.h"
#include "message"
#include "receipt.h"

class Deposit
{
public:
	Deposit(ATM atm, Session session, Card card, aINT pin);
	~Deposit();

	Message getSpecificsFromCustomer();
	Receipt completeTransaction();
private:
	aINT to;
	Money amount;
};