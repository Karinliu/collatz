#include <iostream>

int main() {
    int n;
    
    std::cout << "Enter the first number of the sequence: " <<std::endl;
    std::cin >> n;

    while (n != 1) {
        std::cout << n << " ";

        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
             n = 3 * n + 1;
        }
    }

    std::cout << n << " 4 2 1 4 2 1 ..."  << std::endl;

    return 0;
}