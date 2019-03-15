#pragma once
#include "log.h"
#include "inetaddress.h"
#include "balances.h"
#include "message.h"
#include "status.h"

class NetworkToBank
{
public:
	NetworkToBank(Log log, InetAddress bankAddress);
	~NetworkToBank();

	void openConnection();
	void closeConnection();
	Status sendMessage(Message message, Balances& balances);
private:
	Log log;
	InetAddress bankAddress;
};