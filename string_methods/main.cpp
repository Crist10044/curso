#include <iostream>
#include <string> //para o getline funcionar

int main(){
    
    /*
        .empy -> verifica se esta vazio
        .length -> diz quantos caracteres tem
        .clear -> apaga o conteudo 
        .append -> adiciona uma string ao final exemplo @gmail.com
    */

    std::string name;

    std::cout << "Escreva seu nome: ";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "Voce nao digitou o seu nome";
    }else{

        if(name.length() > 12){
        std::cout << "Seu nome nao pode ter mais que 12 caracteres";
        }else{
           std::cout << "Bem vindo " << name << '\n';

           name.insert(0,"@");
           std::cout << "Seu nome de usuario agora : " << name;
        }
    }
        

    

    return 0;
}