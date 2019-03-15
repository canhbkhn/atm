#pragma once
#include "message.h"
#include "atm.h"
#include "money.h"
class CustomerConsole
{
public:
	CustomerConsole();
	~CustomerConsole();

	void display(std::string message);
	aINT readPIN(std::string prompt);
	aINT readMenuChoice(std::string prompt, std::string* menu);
	Money readAmount(std::string prompt);

private:
};