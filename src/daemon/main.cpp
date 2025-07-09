#include <iostream>
#include "../core/blockchain.h"
#include "../network/p2p.h"
#include "../crypto/crypto.h"
#include "../network/net_config.h"

int main(int argc, char* argv[]) {
    std::cout << "\n🟢 Starting VeidtCoin Daemon...\n";
    std::cout << "🧬 Network: " << NetConfig::TESTNET_NAME << "\n";
    std::cout << "🔗 Port: " << NetConfig::DEFAULT_PORT << "\n\n";

    // Initialize core components
    Blockchain chain;
    P2PNode node(NetConfig::DEFAULT_IP, NetConfig::DEFAULT_PORT);

    // Display genesis block
    Block genesis = chain.getLatestBlock();
    std::cout << "📜 Genesis Block Hash: " << genesis.hash << "\n";
    std::cout << "🗝 Message: " << genesis.extraData << "\n\n";

    // Connect to sample peer for test
    node.connectToPeer("192.168.1.2", NetConfig::DEFAULT_PORT);

    // Simulate adding a block
    std::string txData = "TX: UserA → UserB [12 VDT]";
    chain.addBlock(txData);
    std::cout << "✅ New Block Added: " << chain.getLatestBlock().hash << "\n";

    // Broadcast it
    node.broadcastBlock(chain.getLatestBlock().hash);

    std::cout << "\n💤 Node is idle. Waiting for events...\n";

    return 0;
}
