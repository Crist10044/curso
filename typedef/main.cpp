#include <iostream>

//usado para dar um novo nome a algo que já temos
typedef std::string text_t;
typedef int number_t;

/*
mais recomendado não fazer usado o typedef e sim using

using text_t = std::string
using number_t = int;

*/

int main (){

    text_t nome = "Cris";
    number_t idade = 19;
    
    std::cout << nome << std::endl;
    std::cout << idade;

}