#include <iostream>

void felizAniversario(std::string name){
    std::cout << "Feliz aniversario " << name << "\n";
    std::cout << "Feliz aniversario " << name << "\n";
    std::cout << "Feliz aniversario " << name << "\n";
}

int main()
{
    std::string name;
    std::cout << "Escreva o seu nome: ";
    std::cin >> name;
    

    felizAniversario(name);
    

    return 0;

}   