#include <iostream>
#include "../cryptonote_basic/account.h"

namespace wallet {

void init_wallet() {
    cryptonote::account_base acc;
    std::cout << "Wallet Initialized with address keys:" << std::endl;
    std::cout << "Public Spend Key: " << acc.get_keys().public_spend_key << std::endl;
}

}
