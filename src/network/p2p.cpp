#include "p2p.h"
#include <iostream>

P2PNode::P2PNode(const std::string& ip, int port)
    : selfIp(ip), selfPort(port) {}

void P2PNode::connectToPeer(const std::string& peerIp, int port) {
    std::string peer = peerIp + ":" + std::to_string(port);
    if (peers.find(peer) == peers.end()) {
        peers.insert(peer);
        std::cout << "Connected to peer: " << peer << std::endl;
    }
}

void P2PNode::broadcastBlock(const std::string& blockData) const {
    for (const auto& peer : peers) {
        std::cout << "[Broadcast] Sent block to: " << peer << std::endl;
    }
}

std::vector<std::string> P2PNode::getConnectedPeers() const {
    return std::vector<std::string>(peers.begin(), peers.end());
}
