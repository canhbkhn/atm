#pragma once
#include "atm.h"
#include "card.h"
#include "message.h"
#include "balances"

class Transaction
{
public:
	Transaction(ATM atm, Session session, Card card, aINT pin);
	~Transaction();

	Transaction makeTransaction(ATM atm, Session session, Card card, int pin);
	aBOOL performTransaction();
	Status performInvalidPinExtension();
	aINT getSerialNumber();
	Message getSpecificsFromCustomer();
	Receipt completeTransaction();
private:
	ATM atm;
	Session session;
	Card card;
	aINT pin;
	aINT serialNumber;
	Message message;
	Balances balances;
	const std::string TRANSACTION_SPECIFICS_STATE[];
	aINT nextSerialNumber;
	aINT state;
	const aINT GETTING_SPECIFICS_STATE;
	const aINT SENDING_TO_BANK_STATE;
	const aINT INVALID_PIN_STATE;
	const aINT COMPLETING_TRANSACTION_STATE;
	const aINT PRINTING_RECEIPT_STATE;
	const aINT ASKING_DO_ANOTHER_STATE;
};