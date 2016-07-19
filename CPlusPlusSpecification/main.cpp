#include <iostream>
#include <cstdio>
#include <cstdlib>

int main()
{
    std::string linha;
    std::cout << "Digite uma frase: "<<std::endl;
    std::getline(std::cin,linha);
    std::cout << "A frase digitada é: " << std::endl;
    std::cout << linha;
    return 0;
}
