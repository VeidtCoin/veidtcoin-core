#pragma once

#include <string>

namespace cryptonote {

class account_keys {
public:
    std::string public_spend_key;
    std::string public_view_key;
    std::string private_spend_key;
    std::string private_view_key;
};

class account_base {
public:
    account_base();
    void generate();
    const account_keys& get_keys() const;

private:
    account_keys m_keys;
};

} // namespace cryptonote
