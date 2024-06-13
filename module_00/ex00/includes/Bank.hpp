#ifndef BANK_HPP
# define BANK_HPP

# include <vector>
# include <iostream>
# include "Colors.hpp"

struct Bank {

 public:

	Bank(long liquidity);
	~Bank();

 private:

    int bank_liquidity;
    std::vector<Account *> clientAccounts;

    friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);


    // Account sub-struct, integrated to the Bank struct 
    struct Account {

		Account(int id, long account_liquidity);

	 private:

		int 	id;
		long 	account_liquidity;


        friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
    };
};

#endif // BANK_HPP