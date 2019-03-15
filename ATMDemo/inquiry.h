#pragma once
#include "atm.h"
#include "session.h"
#include "card.h"
#include "message.h"
#include "receipt.h"

class Inquiry
{
public:
	Inquiry(ATM atm, Session session, Card card, aINT pin);
	~Inquiry();

	Message getSpecificsFromCustomer();
	Receipt completeTransacion();
private:
	aINT from;
};