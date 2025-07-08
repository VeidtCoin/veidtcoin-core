cmake_minimum_required(VERSION 3.13)
project(VeidtCoin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler options
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Include directories
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/src/crypto
  ${PROJECT_SOURCE_DIR}/src/cryptonote_basic
)

# Source files
set(SOURCES
  src/daemon/main.cpp
  src/version.cpp
  src/cryptonote_basic/account.cpp
  src/crypto/crypto.cpp
  src/blockchain_db/db_lmdb.cpp
  src/wallet/wallet2.cpp
)

add_executable(veidtd ${SOURCES})
