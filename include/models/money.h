#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

class Money
{
	private:
		double amount;
		std::string currency;
	
	public:
		Money(double amt = 0, std::string curr = "USD");


		// Set amount and currency
		void setAmount(double amt, std::string curr);

		// Get amount of money
		double getAmount() const;

		// Get currency
		std::string getCurrency() const;
};

#endif