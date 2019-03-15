#pragma once
#include "atm.h"

class Status
{
public:
	std::string toString();
	aBOOL isSuccess();
	aBOOL isInvalidPIN();
	std::string getMessage();
private:
};