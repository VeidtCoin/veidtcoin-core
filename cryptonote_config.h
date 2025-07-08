#pragma once

namespace config {

constexpr uint64_t MONEY_SUPPLY              = 2100000000000000; // 21 million * 1e8 atomic units
constexpr uint64_t EMISSION_SPEED_FACTOR     = 18;
constexpr uint64_t DIFFICULTY_TARGET         = 45; // seconds
constexpr uint64_t MAX_BLOCK_SIZE_INITIAL    = 100000;
constexpr uint64_t DEFAULT_MIXIN             = 11;
constexpr uint64_t DEFAULT_FEE_ATOMIC_UNITS  = 50000;

constexpr const char* GENESIS_TX = "GENESIS_TRANSACTION_PLACEHOLDER";
constexpr const char* NETWORK_NAME = "VeidtCoin-Mainnet";

}
