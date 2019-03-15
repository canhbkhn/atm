#include "atm.h"

ATM::ATM(int _id,
	std::string _place,
	std::string _bankName,
	std::string _bankAddress) : id(_id), place(_place), bankName(_bankName), bankAddress(_bankAddress) {}

ATM::~ATM()
{

}

void ATM::run()
{
	//TODO:
}

aBOOL ATM::switchOn()
{
	//TODO:
	return false;
}

aBOOL ATM::switchOff()
{
	//TODO:
	return false;
}

aBOOl ATM::cardInserted()
{
	//TODO:
	return false;
}

aINT ATM::getID()
{
	//TODO:
	return id;
}

std::string ATM::getPlace()
{
	//TODO:
	return place;
}

std::string ATM::getBankName()
{
	//TODO:
	return bankName;
}

CardReader ATM::getCardReader()
{
	//TODO:
	return cardReader;
}

CardDispenser ATM::getCardDispenser()
{
	//TODO:
	return cardDispenser;
}

CustomerConsole ATM::getCustomerConsole()
{
	//TODO:
	return customerConsole;
}

EnvelopeAcceptor ATM::getEvelopeAcceptor()
{
	//TODO:
	return envelopeAcceptor;
}

Log ATM::getLog()
{
	//TODO:
	return log;
}

NetworkToBank ATM::getNetworkToBank()
{
	//TODO:
	return networkToBank;
}

OperatorPanel ATM::getOperatorPanel()
{
	//TODO:
	return operatorPanel;
}

ReceiptPrinter ATM::getReceiptPrinter()
{
	//TODO:
	return receiptPrinter;
}