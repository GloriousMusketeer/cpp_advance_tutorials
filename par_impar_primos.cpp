#include <iostream>

int main() {
    int num, m;
    bool flag = true;
    std::cout << "Digite numero integer: ";
    std::cin >> num;
    m = num / 2;
    for (int i = 2; i <= m; i++) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag == true)
        std::cout << "es un numero primo" << std::endl;
    else
        std::cout << "no es un numero primo" << std::endl;

    if (num % 2 == 0)
        std::cout << num << "es un numero par" << std::endl;
    else
        std::cout << num << " es un numero impar" << std::endl;

    return 0;
}
