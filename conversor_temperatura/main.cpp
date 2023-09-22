#include <iostream>

int main (){
    
    int resposta;
    double num,resultado;

    std::cout << "------- Conversor de temperaturas ------- \n";
    std::cout << "Digite a conversao que voce deseja fazer \n";
    std::cout << "[1] Kelvin -> Celsius \n";
    std::cout << "[2] Kelvin -> Fahrenheit \n";
    std::cout << "[3] Celsius -> Kelvin \n";
    std::cout << "[4] Celsis -> Fahrenheit \n";
    std::cout << "[5] Fahrenheit -> Celsius \n";
    std::cout << "[6] Fahrenheit -> Kelvin \n";
    std::cin >> resposta;


    switch (resposta)
    {
    case 1:
        std::cout << "Digite a temperatura em Kelvin: ";
        std::cin >> num;
        resultado = num - 273 ;
        std::cout << num << " graus Kelvin sao " << resultado << " graus Celsius";
        break;
    case 2:
        std::cout << "Digite a temperatura em Kelvin: ";
        std::cin >> num;
        resultado = (num - 273) * 1.8 + 32;
        std::cout << num << " graus Kelvin sao " << resultado << " graus Celsius";
        break;
    case 3:
        std::cout << "Digite a temperatura em Celsius: ";
        std::cin >> num;
        resultado = num + 273;
        std::cout << num << " graus Celsius sao " << resultado << " graus Kelvin";
        break;
    case 4:
        std::cout << "Digite a temperatura em Celsius: ";
        std::cin >> num;
        resultado = num * 1.8 + 32;
        std::cout << num << " graus Celsius sao " << resultado << " graus Fahrenheit";
        break;
    case 5:
        std::cout << "Digite a temperatura em Fahrenheit: ";
        std::cin >> num;
        resultado = (num - 32)/1.8;
        std::cout << num << " graus Fahrenheit sao " << resultado << " graus Celsius";
        break;
    case 6:
        std::cout << "Digite a temperatura em Fahrenheit: ";
        std::cin >> num;
        resultado = (num - 32) * 5/9 + 273;
        std::cout << num << " graus Fahrenheit sao " << resultado << " graus Kelvin";
        break;
    default:
        std::cout << "Voce nao digitou uma opcao valida";
        break;
    }
}