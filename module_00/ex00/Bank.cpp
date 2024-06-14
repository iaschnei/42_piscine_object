#include "Bank.hpp"

Bank::Bank(long bank_liquidity) : bank_liquidity(bank_liquidity) {
    std::cout << GREEN << "Bank created with a liquidity of " << this->bank_liquidity << RESET << std::endl;
}

Bank::~Bank(void) {

    if (!client_accounts.empty())
    {
        std::map<int, Account *>::iterator it = client_accounts.begin();

        while (it != client_accounts.end()) {
            int id = it->first;
            it++;
            this->delete_account(id);
        }
    }

    std::cout << RED << "Bank deleted" << RESET << std::endl;
}

Bank::Account::Account(int id) : id(id) {

    this->account_liquidity = 0;
}

int Bank::create_account(void) {

    int     new_id = client_accounts.size();

    //Make sure the id is unique
    while (client_accounts.find(new_id) != client_accounts.end()) {
        new_id++;
    }

    Account *new_account = new Account(new_id);

    client_accounts.insert(std::pair<int, Account *>(new_id, new_account));

    std::cout << GREEN << "Account created with an id of " << new_id << RESET << std::endl;

    return (new_id);
}

void    Bank::delete_account(int id) {

    Account *account_to_delete = client_accounts.at(id);

    delete(account_to_delete);

    std::map<int, Account *>::iterator it = client_accounts.find(id);
    client_accounts.erase(it);

    std::cout << RED << "Account deleted" << RESET << std::endl;
}

void    Bank::add_funds_to_account(long value, int id) {

    Account *account = client_accounts.at(id);

    account->account_liquidity += (value * 0.95);

    this->bank_liquidity += (value * 0.05);

    std::cout << BLUE << (value * 0.95) << " added to account id " << id << ". They now have " << account->account_liquidity << RESET << std::endl;
}

void    Bank::remove_funds_from_account(long value, int id) {

    Account *account = client_accounts.at(id);

    if (account->account_liquidity < value) {
        throw AccountFundsTooLowException();
    }

    account->account_liquidity -= value;

    std::cout << BLUE << value << " removed from account id " << id << ". They now have " << account->account_liquidity << RESET << std::endl;

}

void    Bank::grant_loan_to_account(long value, int id) {

    Account *account = client_accounts.at(id);

    if (this->bank_liquidity < value) {
        throw BankFundsTooLowException();
    }

    account->account_liquidity += value;
    this->bank_liquidity -= value;

    std::cout << BLUE << value << " loaned to account id " << id << ". They now have " << account->account_liquidity << RESET << std::endl;
    std::cout << BLUE << "The bank now has " << this->bank_liquidity << RESET << std::endl;
}

Bank::Account *Bank::operator[](int id) {

    Account *account = client_accounts.at(id);

    return (account);
}

const char *Bank::AccountFundsTooLowException::what() const throw() {
    return ("The account does not have enough funds to perform this operation.");
}

const char *Bank::BankFundsTooLowException::what() const throw() {
    return ("The bank does not have enough funds to perform this operation.");
}