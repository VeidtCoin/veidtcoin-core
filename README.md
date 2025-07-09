# VeidtCoin Core

**Privacy by design. Silence by birth.**  
VeidtCoin is a privacy-focused cryptocurrency inspired by Monero and Bitcoin — rebuilt from scratch for clarity, modularity, and full control.

> “This chain is not the beginning.  
> It is the shadow before the signal.”  
> — *Taro Veidt, First Cipherholder*

## 🛠 Features
- ShadowNet testnet built-in
- Genesis block embedded with VeidtQuote
- RingCT scaffolding + Stealth addresses
- 21M fixed supply
- 45s block time
- MIT Licensed

## 🚀 How to Build

```bash
git clone https://github.com/VeidtCoin/veidtcoin-core.git
cd veidtcoin-core
mkdir build && cd build
cmake ..
make -j$(nproc)
