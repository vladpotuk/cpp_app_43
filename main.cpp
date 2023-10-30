#include <iostream>
#include "Func.h"

void checkPositive(int number, bool& isPositive) {
    if (number > 0) {
        isPositive = true;  
    }
    else {
        isPositive = false; 
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int num;
    bool isPositiveResult;

    std::cout << "Введіть число для перевірки, чи воно є додатнім: ";
    std::cin >> num;

    checkPositive(num, isPositiveResult);

    if (isPositiveResult) {
        std::cout << "Число " << num << " є додатнім." << std::endl;
    }
    else {
        std::cout << "Число " << num << " не є додатнім." << std::endl;
    }

    return 0;
}
