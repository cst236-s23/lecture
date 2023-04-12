#include <iostream>
#include "fact.h"

int main(int argc, char * argv[]) {
    if (argc != 2) {
        std::cerr << "Program takes one arg:  N for fact(N)\n"
                  << "\n\t<program_name> N\n";
        return 1;
    }
    int n = std::stoi(argv[1]);
    std::cout << "My awesome factorial: " << fact(n) << '\n';
}
