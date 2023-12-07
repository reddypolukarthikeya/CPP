#include <iostream>

int main() {
    int x=-1;
    std::cout << std::endl << "Before try";
    try {
        std::cout << std::endl << "Inside try";
        if (x < 0) {
            throw x;
            std::cout << std::endl << "After throw";
        }
    }
    catch (int x) {
        std::cout << std::endl << "Exception caught";
    }
    std::cout << std::endl << "After catch";
    return 0;
}