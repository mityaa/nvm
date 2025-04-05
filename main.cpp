#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Использование: утилита <аргумент>" << std::endl;
        return 1;
    }


    std::string argument = argv[1];

     std::cout << "Вы ввели аргумент: " << argument << std::endl;

    return 0;
}