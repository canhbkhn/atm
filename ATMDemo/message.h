#pragma once
#include "atm"
#include "money.h"
#include "card.h"

class Message
{
public:
	Message(ATM atm, Card cardNumber, aINT pin, aINT serialNumber, aINT fromAccount, aINT Account, Money amount);
	~Message();

	std::string toString();
	void setPIN(aINT pin);
	aINT getMessageCode();
	Card getCard();
	aINT getPIN();
	aINT getSerialNumber();
	aINT getFromAccount();
	aINT getToAccount();
	Money getAmount();
private:
	const aINT WITHDRAWAL;
	const aINT INITIATE_DEPOSIT;
	const aINT COMPLETE_DEPOSIT;
	const aINT TRANSFER;
	const aINT INQUIRY;
	aINT messageCode;
	Card getCard();
	aINT getPIN();
	aINT getSerialNumber();
	aINT getFromAccount();
	aINT getToAccount();
	Money getAmount();
};