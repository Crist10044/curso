#include <iostream>

//comentario em uma linha
/*
    comentario em várias linhas
*/

int main (){
    std::cout << "Hello World" << std::endl;
    std::cout << "teste pular linha" << '\n';
    std::cout << "outra maneira de pular linha" << std::endl;


    //numeros inteiros
    int x = 11;
    std::cout << x << std::endl;

    //aceita também numeros decimais
    double price = 11.52;
    std::cout << price << std::endl;

    //guarda apenas 1 caractere
    char initial = 'C';
    
    //booleano verdadeiro || falso
    bool student = true;
    bool open = false;

    //não é limitado a 1 caractere feito char
    std::string name = "Cris";
    std::cout << "Oi " << name;

    //valor não pode ser alterado 
    const double PI = 3.14;

    return 0;
}