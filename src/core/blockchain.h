#ifndef VEIDTCOIN_BLOCKCHAIN_H
#define VEIDTCOIN_BLOCKCHAIN_H

#include <vector>
#include <string>
#include <cstdint>

struct Block {
    uint64_t index;
    uint64_t timestamp;
    std::string prevHash;
    std::string hash;
    std::string merkleRoot;
    std::string extraData;
};

class Blockchain {
public:
    Blockchain();
    const Block& getLatestBlock() const;
    void addBlock(const std::string& data);
    bool validateChain() const;
    const std::vector<Block>& getChain() const;

private:
    std::vector<Block> chain;
    Block createGenesisBlock();
    Block createBlock(const std::string& data);
    std::string calculateHash(const Block& block) const;
};

#endif
