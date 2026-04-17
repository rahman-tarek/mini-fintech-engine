#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include "money.h"

class Account
{
	private:
		std::string name;
		Money balance;
	
	public:
		// Account creation
		Account(std::string nm, Money mny);

		// Get account holder's name
		std::string getName() const;

		// Get account balance
		Money getBalance() const;

		// Money deposit
		void deposit(const Money& m);

		// Money withdraw
		void withdraw(const Money& m);


		// Money transfer
		void transfer(Account& to, const Money& m);
};

#endif