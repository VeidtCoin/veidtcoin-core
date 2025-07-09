#ifndef VEIDTCOIN_RINGCT_H
#define VEIDTCOIN_RINGCT_H

#include <string>
#include <vector>

struct RingCTInput {
    std::string keyImage;
    std::vector<std::string> mixins;
};

struct RingCTOutput {
    std::string stealthAddress;
    uint64_t amount;
};

class RingCT {
public:
    static std::string createSignature(const std::string& message, const RingCTInput& input);
    static bool verifySignature(const std::string& signature, const RingCTInput& input);
};

#endif
