#include <iostream>
#include <string>

int main()
{
    std::string name;
    int number;

    while (name.empty())
    {
        std::cout << "Escreva o seu nome: ";
        std::getline(std::cin, name);
    }

    std::cout << "Oi " << name << '\n';
    

    do {
        std::cout << "Escreva um numero positivo: ";
        std::cin >> number;
    }while (number < 0);

    std::cout << "O numero e: " << number << '\n';
    

    for (int i = 5; i >0; i--)
    {
        std::cout << i << '\n';
    }

    std::cout << "Feliz ano novo! \n";
    

    return 0;

}