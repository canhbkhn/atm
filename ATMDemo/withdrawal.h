#pragma once
#include "money.h"
#include "atm.h"
#include "message.h"
#include "receipt.h"
#include "session.h"
#include "card.h"

class Withdrawal
{
public:
	Withdrawal(ATM atm, Session session, Card card, aINT pin);
	Message getSpecificsFromCustomer();
	Receipt completeTransaction();
private:
	aINT from;
	Money amount;
};