#pragma once
#include <iostream>
#include <string>

typedef bool aBOOL;
typedef int aINT;

class ATM {
public:
	ATM(int id, std::string place,
		std::string bankName, InetAddress bankAddress);
	~ATM();

	void run();
	aBOOL switchOn();
	aBOOL switchOff();
	aBOOL cardInserted();
	aINT getID();
	std::string getPlace();
	std::string getBankName();
	CardReader getCardReader();
	CashDispenser getCardDispenser();
	CustomerConsole getCustomerConsole();
	EnvelopeAcceptor getEvelopeAcceptor();
	Log getLog();
	NetworkToBank getNetworkToBank();
	OperatorPanel getOperatorPanel();
	ReceiptPrinter getReceiptPrinter();
	void performStartup();
	void performShutdown();
private:
	int id;
	std::string place;
	std::string bankName;
	InetAddress bankAddress;
	CardReader cardReader;
	CashDispenser cardDispenser;
	CustomerConsolse customerConsole;
	EnvelopeAcceptor envelopeAcceptor;
	Log log;
	NetworkToBank networkToBank;
	OperatorPanel operatorPanel;
	ReceiptPrinter receiptPrinter;
	int state;
	aBOOL switchOn;
	aBOOL switchOff;
	const int OFF_STATE;
	const int IDLE_STATE;
	const int SERVING_CUSTOMER_STATE;
	
};