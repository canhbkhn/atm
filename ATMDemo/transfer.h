#pragma once
#include "atm.h"
#include "session.h"
#include "card.h"
#include "message.h"
#include "receipt.h"
#include "money.h"

class Transfer
{
public:
	Transfer(ATM atm, Session session, Card card, aINT pin);
	~Transfer();

	Message getSpecificsFromCustomer();
	Receipt completeTransaction();
private:
	aINT from;
	aINT to;
	Money amount;
};