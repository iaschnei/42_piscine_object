#include <iostream>
#include <vector>
#include "includes/Colors.hpp"
#include "includes/Bank.hpp"

int main(void) {

	try {

		std::cout << YELLOW << "----------- FIRST TEST -------------" << RESET << std::endl;

		Bank bank = Bank(10000);

		int account_1 = bank.create_account();

		bank.add_funds_to_account(100, account_1);
		std::cout << *(bank[account_1]) << std::endl;
		bank.remove_funds_from_account(95, account_1);

		std::cout << bank<< std::endl;

		bank.delete_account(account_1);

	}
	catch (const std::out_of_range& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: Trying to access out of range index" << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }
	catch (const std::exception& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: " << e.what() << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }

    try {

		std::cout << YELLOW << "----------- SECOND TEST -------------" << RESET << std::endl;

		Bank bank = Bank(10000);

		int account_1 = bank.create_account();

		bank.grant_loan_to_account(100, account_1);
		std::cout << *(bank[account_1]) << std::endl;

		std::cout << bank<< std::endl;

		bank.delete_account(account_1);

	}
	catch (const std::out_of_range& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: Trying to access out of range index" << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }
	catch (const std::exception& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: " << e.what() << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }

    try {

		std::cout << YELLOW << "----------- THIRD TEST -------------" << RESET << std::endl;

		Bank bank = Bank(10000);

		int account_1 = bank.create_account();
		int account_2 = bank.create_account();
		int account_3 = bank.create_account();

		bank.grant_loan_to_account(100, account_1);
		std::cout << *(bank[account_1]) << std::endl;

		bank.add_funds_to_account(1000, account_2);
		std::cout << *(bank[account_2]) << std::endl;

		bank.add_funds_to_account(1000000, account_3);
		std::cout << *(bank[account_3]) << std::endl;

		std::cout << bank<< std::endl;

		bank.remove_funds_from_account(50, account_1);
		std::cout << *(bank[account_1]) << std::endl;
	}
	catch (const std::out_of_range& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: Trying to access out of range index" << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }
	catch (const std::exception& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: " << e.what() << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }

    try {

		std::cout << YELLOW << "----------- FOURTH TEST -------------" << RESET << std::endl;

		Bank bank = Bank(0);

		int account_1 = bank.create_account();

		bank.remove_funds_from_account(200, account_1);				// Not enough account funds

		// bank.grant_loan_to_account(200, account_1);				// Not enough bank funds

		// bank.delete_account(2);									// Out of range

		// bank.add_funds_to_account(200, 321);						// Out of range

	}
	catch (const std::out_of_range& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: Trying to access out of range index" << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }
	catch (const std::exception& e) {
		std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
        std::cerr << MAGENTA << "Exception: " << e.what() << RESET << std::endl;
        std::cerr << MAGENTA << "--|------------------------------------" << RESET << std::endl;
    }

	return (0);
}
