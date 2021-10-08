#include <iostream>

int main() {
    int num;

    std::cout << "Digite un numero integer: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << num << "es un numero par" << std::endl;
    else
        std::cout << num << " es un numero impar" << std::endl;

    return 0;
}
