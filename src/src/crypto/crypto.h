#ifndef VEIDTCOIN_CRYPTO_H
#define VEIDTCOIN_CRYPTO_H

#include <string>

std::string sha256(const std::string& input);
std::string keccak256(const std::string& input);
std::string generate_private_key();
std::string derive_public_key(const std::string& privateKey);
std::string generate_ring_signature(const std::string& message);

#endif
