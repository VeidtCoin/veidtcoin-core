#ifndef VEIDTCOIN_P2P_H
#define VEIDTCOIN_P2P_H

#include <string>
#include <vector>
#include <unordered_set>

class P2PNode {
public:
    P2PNode(const std::string& selfIp, int port);
    
    void connectToPeer(const std::string& peerIp, int port);
    void broadcastBlock(const std::string& blockData) const;
    std::vector<std::string> getConnectedPeers() const;

private:
    std::string selfIp;
    int selfPort;
    std::unordered_set<std::string> peers;
};

#endif
