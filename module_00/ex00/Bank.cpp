#include "Bank.hpp"

Bank::Bank(long liquidity) : bank_liquidity(liquidity) {
    
}

Bank::~Bank() {

}

Bank::Account::Account() {

}



std::ostream& operator << (std::ostream& p_os, const Account& p_account)
{
    p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
    return (p_os);
}


std::ostream& operator << (std::ostream& p_os, const Bank& p_bank) {

    p_os << "Bank informations : " << std::endl;
    p_os << "Liquidity : " << p_bank.liquidity << std::endl;

    return (p_os);
}