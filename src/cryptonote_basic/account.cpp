#include "account.h"
#include <iostream>
#include <random>

namespace cryptonote {

account_base::account_base() {
    generate();
}

void account_base::generate() {
    // Simulated key generation (replace with real crypto later)
    m_keys.public_spend_key = "VeidtPublicSpendKey";
    m_keys.public_view_key = "VeidtPublicViewKey";
    m_keys.private_spend_key = "VeidtPrivateSpendKey";
    m_keys.private_view_key = "VeidtPrivateViewKey";

    std::cout << "Wallet keys generated." << std::endl;
}

const account_keys& account_base::get_keys() const {
    return m_keys;
}

} // namespace cryptonote
