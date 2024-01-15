#include <iostream>

int main(){

    int idade;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18)
    {
        std::cout << "Bem vindo ao site";
    }
    else if(idade < 0){
        std::cout << "Voce ainda nao nasceu";
    }
    else{
        std::cout << "Voce nao tem a idade minima pra entrar";
    }
    

}