#pragma once

#include <string>

namespace crypto {

std::string generate_public_key();
std::string generate_private_key();
bool verify_signature(const std::string& message, const std::string& signature);

}
