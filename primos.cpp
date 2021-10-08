#include <iostream>

int main() {
    int num, m;
    bool flag = true;
    std::cout << "Digite un numero integer: ";
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
    return 0;
}
