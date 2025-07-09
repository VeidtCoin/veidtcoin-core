#include "blockchain.h"
#include "../crypto/crypto.h"
#include <ctime>

Blockchain::Blockchain() {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() {
    Block genesis;
    genesis.index = 0;
    genesis.timestamp = std::time(nullptr);
    genesis.prevHash = "0";
    genesis.extraData = "“This chain is not the beginning. It is the shadow before the signal.” — Taro Veidt";
    genesis.merkleRoot = "shadow";
    genesis.hash = calculateHash(genesis);
    return genesis;
}

const Block& Blockchain::getLatestBlock() const {
    return chain.back();
}

const std::vector<Block>& Blockchain::getChain() const {
    return chain;
}

Block Blockchain::createBlock(const std::string& data) {
    Block newBlock;
    newBlock.index = chain.size();
    newBlock.timestamp = std::time(nullptr);
    newBlock.prevHash = getLatestBlock().hash;
    newBlock.extraData = data;
    newBlock.merkleRoot = "TODO"; // future: merkle tree
    newBlock.hash = calculateHash(newBlock);
    return newBlock;
}

void Blockchain::addBlock(const std::string& data) {
    Block newBlock = createBlock(data);
    chain.push_back(newBlock);
}

bool Blockchain::validateChain() const {
    for (size_t i = 1; i < chain.size(); ++i) {
        if (chain[i].prevHash != chain[i - 1].hash)
            return false;
    }
    return true;
}

std::string Blockchain::calculateHash(const Block& block) const {
    std::string input = std::to_string(block.index) + std::to_string(block.timestamp)
                      + block.prevHash + block.extraData + block.merkleRoot;
    return sha256(input);
}
