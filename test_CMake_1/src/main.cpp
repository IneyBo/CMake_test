#include <iostream>

#include <Windows.h>

#include "leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Communication::Leaver leaving;
    std::cout << "Введите имя: ";
    std::string inputWord;
    std::cin >> inputWord;
    std::cout << leaving.leave(inputWord) << std::endl;

    return 0;
}