#include <iostream>
#include <string>
#include "../include/models/money.h"
#include "../include/models/account.h"


int main()
{

	Account acc1("John", Money(100, "USD"));
	Account acc2("Doe", Money(200, "USD"));
	
	std::cout << "Name: " << acc1.getName() << std::endl; 
	std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;
	
	acc1.deposit(Money(50, "USD"));
	std::cout << "Name: " << acc1.getName() << std::endl; 
	std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	acc1.withdraw(Money(40, "USD"));
	std::cout << "Name: " << acc1.getName() << std::endl; 
	std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	acc1.transfer(acc2, Money(30, "USD"));
	std::cout << "Name: " << acc1.getName() << std::endl; 
	std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	std::cout << "Name: " << acc2.getName() << std::endl; 
	std::cout << "Amount: " << acc2.getBalance().getAmount() << acc2.getBalance().getCurrency() << std::endl;
}