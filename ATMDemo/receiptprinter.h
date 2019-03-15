#pragma once
#include "receipt.h"

class ReceiptPrinter
{
public:
	ReceiptPrinter();
	~ReceiptPrinter();

	void printReceipt(Receipt receipt);
private:
};