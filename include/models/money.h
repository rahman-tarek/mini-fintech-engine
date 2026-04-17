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
		Money(double amt = 0, std::string curr = "BDT"): amount(amt), currency(curr) {}	
		
		void setAmount(double amt, std::string curr);

		double getAmount() const;

		std::string getCurrency() const;
};

#endif