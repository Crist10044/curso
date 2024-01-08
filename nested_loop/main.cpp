#include <iostream>
#include <string>

//nested loop é um loop dentro de outro loop

int main()
{
    int linhas, colunas;
    char simbolo;

    std::cout << "Quantas linhas? ";
    std::cin >> linhas;

    std::cout << "Quantas colunas? ";
    std::cin >> colunas;

    std::cout << "Qual o simbolo? ";
    std::cin >> simbolo;


    for (int i = 1; i <= linhas; i++)
    {
        for (int n = 1; n <= colunas; n++)
        {
            std::cout << simbolo;
        }

        std::cout << '\n';
        
    }
    
    

    return 0;

}