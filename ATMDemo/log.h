#pragma once
#include "message.h"
#include "status.h"
#include "money.h"

class Log
{
public:
	Log();
	~Log();

	void logSend(Message message);
	void logResponse(Status status);
	void logCashDispensed(Money amount);
	void logEnvelopeAccepted();
private:

};