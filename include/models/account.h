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
		Account(std::string nm, Money mny): name(nm),balance(mny) {}

		// Money deposit
		void deposit(const Money& m);

		// Money withdraw
		void withdraw(const Money& m);

		// Money transfer
		void transfer(Account& to, const Money& m);

		// Show account information
		void show();
};

#endif