# VeidtCoin Core

> “The old currencies were bound to names, nations, and noise.  
> This one is born in silence, unseen — a whisper of wealth beneath the system.”  
> — Taro Veidt, First Cipherholder

VeidtCoin is a privacy-focused cryptocurrency inspired by Monero and Bitcoin — built for those who believe in value without identity, wealth without noise, and code without compromise.

---

## 🔐 Key Features
- 🕯 Total Supply: 21,000,000 VDT (capped)
- ⏱ Block Time: 45 seconds
- 🔒 Privacy: Native stealth addresses + ring signatures (like Monero)
- 🌗 Anonymous creator: [Taro Veidt](https://en.wikipedia.org/wiki/Nobody_(mythology))

---

## 🛠 Requirements
- CMake ≥ 3.13
- Boost ≥ 1.67
- OpenSSL
- GCC or Clang

## 🧱 Build Instructions

```bash
git clone https://github.com/VeidtCoin/veidtcoin-core.git
cd veidtcoin-core
mkdir build && cd build
cmake ..
make -j$(nproc)
