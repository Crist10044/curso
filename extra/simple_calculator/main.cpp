#include <iostream>

int main(){

    char operador;
    double num1, num2, resultado;
    
    std::cout << "----------------------------" << std::endl;
    std::cout << "--------CALCULADORA---------" << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "Digite a operacao que voce deseja fazer " << std::endl;
    std::cout << "[ + | - | x | % ]" << std::endl;
    std::cin >> operador;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digie o segundo numero: ";
    std::cin >> num2;

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        std::cout << num1 << operador << num2 << '=' << resultado;
        break;
    case '-':
        resultado = num1 - num2;
        std::cout << num1 << operador << num2 << '=' << resultado;
        break;
    case 'x':
        resultado = num1 * num2;
        std::cout << num1 << operador << num2 << '=' << resultado;
        break;
    case '%':
        resultado = num1 / num2;
        std::cout << num1 << operador << num2 << '=' << resultado;
        break;
    
    default:
        std::cout << "Voce nao digitou um operador valido";
        break;
    }


}