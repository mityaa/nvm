#include <iostream>
#include <vector>

int main(const int argc, char* args[]) {
    const std::vector<char*> args_vector(args, args + argc);

    if (const int argsCount = args_vector.size(); argsCount <= 1)
    {
        std::cout << "Not enough arguments. Help will be invoked" << std::endl;
        return 0;
    }

    return 0;
}