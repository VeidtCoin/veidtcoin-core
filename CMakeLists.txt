cmake_minimum_required(VERSION 3.10)
project(veidtcoin-core)

set(CMAKE_CXX_STANDARD 17)

# Subdirectories
add_subdirectory(src/core)
add_subdirectory(src/crypto)
add_subdirectory(src/network)
add_subdirectory(src/daemon)
add_subdirectory(src/genesis)

# Main daemon executable
add_executable(veidtd src/daemon/main.cpp)

target_include_directories(veidtd PRIVATE
    src/core
    src/crypto
    src/network
    src/daemon
    src/genesis
)

target_link_libraries(veidtd
    core
    crypto
    network
    daemon
    genesis
)
