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

    std::cout << "������ ����� ��� ��������, �� ���� � �������: ";
    std::cin >> num;

    checkPositive(num, isPositiveResult);

    if (isPositiveResult) {
        std::cout << "����� " << num << " � �������." << std::endl;
    }
    else {
        std::cout << "����� " << num << " �� � �������." << std::endl;
    }

    return 0;
}
