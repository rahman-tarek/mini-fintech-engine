#include <iostream>
#include <string>
#include <fstream>
#include "../include/models/money.h"
#include "../include/models/account.h"


int main()
{

	// Account acc1("John", Money(100, "USD"));
	// Account acc2("Doe", Money(200, "USD"));
	
	// std::cout << "Name: " << acc1.getName() << std::endl; 
	// std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;
	
	// acc1.deposit(Money(50, "USD"));
	// std::cout << "Name: " << acc1.getName() << std::endl; 
	// std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	// acc1.withdraw(Money(40, "USD"));
	// std::cout << "Name: " << acc1.getName() << std::endl; 
	// std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	// acc1.transfer(acc2, Money(30, "USD"));
	// std::cout << "Name: " << acc1.getName() << std::endl; 
	// std::cout << "Amount: " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;

	// std::cout << "Name: " << acc2.getName() << std::endl; 
	// std::cout << "Amount: " << acc2.getBalance().getAmount() << acc2.getBalance().getCurrency() << std::endl;

	int choice;
	while(1)
	{
		std::cout << "1. Create account" << std::endl;
		std::cout << "2. Login" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice)
		{
			case 1:
				{
					std::string name;
					std::cout << "Enter your name: ";
					std::cin >> name;

					Account acc1(name, Money(0, "USD")); // Create a new account with name and initial balance
					
					
					std::ofstream file("../data/accounts.txt", std::ios::app); // Open the file in write mode
					
					if(file.is_open())
					{
						std::cout << "File opened" << std::endl;
						file << acc1.getName() << ": " << acc1.getBalance().getAmount() << acc1.getBalance().getCurrency() << std::endl;
						file.close(); // Close the file after writing
					}
					else
					{
						std::cout << "Unable to open file" << std::endl;
					}
					
					std::cout << "Account created successfully" << std::endl;
				}
			break;
			case 2:
				{
					std::string name;
					std::cout << "Enter your name: ";
					std::cin >> name;
				}
			case 3:
			exit(1); // Exit the program if user choice 3

			default:
			break;
		}
	}
}