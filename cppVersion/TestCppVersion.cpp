#include <iostream>

int main() {
    #if __cplusplus == 201703L
        std::cout << "C++17" << std::endl;
    #elif __cplusplus == 201402L
        std::cout << "C++14" << std::endl;
    #elif __cplusplus == 201103L
        std::cout << "C++11" << std::endl;
    #elif __cplusplus == 199711L
        std::cout << "C++98" << std::endl;
    #else
        std::cout << "Unknown C++ standard" << std::endl;
    #endif

    return 0;
}

// C++14