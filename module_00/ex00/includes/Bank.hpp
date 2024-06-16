#ifndef BANK_HPP
# define BANK_HPP

# include <map>
# include <iostream>
# include "Colors.hpp"

struct Bank {

 public:

    // Account sub-struct, integrated to the Bank struct 
    struct Account {

		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account){

		    p_os << "Account ID: " << p_account.id << ", Account Liquidity: " << p_account.account_liquidity;
		    return p_os;
		}

		friend struct Bank;

	 private:

	 	Account(int id);

	 	int 	id;
	 	long 	account_liquidity;
    };

	Bank(long bank_liquidity);
	~Bank();

	int		create_account();
	void	delete_account(int id);
    void	add_funds_to_account(long value, int id);
    void	remove_funds_from_account(long value, int id);
    void	grant_loan_to_account(long value, int id);

    Account *operator[](int id);

    class AccountFundsTooLowException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class BankFundsTooLowException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank) {

	    p_os << "Bank liquidity: " << p_bank.bank_liquidity << ", Number of accounts: " << p_bank.client_accounts.size();
	    return p_os;
	}

 private:

    int bank_liquidity;
    std::map<int, Account *> client_accounts;

};

#endif // BANK_HPP