#include <iostream>
#include <string>

int main (){
    
    std::string name;
    int age;

    std::cout << "Qual e o seu nome? ";
    std::getline(std::cin >> std::ws, name);
    //usar a função getline é necessario para o usuario conseguir dar espaço e escrever o sobrenome
    //std:ws usado para que não ocorra um erro caso eu peça a idade primeiro (erro causado por der um getline apos um cin 

    std::cout << "Qual e a sua idade? ";
    std::cin >> age;

    std::cout << "Oi " << name << std::endl;
    std::cout << "Voce tem " << age << " anos";
}