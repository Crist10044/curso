#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  
    int num,guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "-------- JOGO ADIVINHACAO DE NUMERO -------- \n";

    do
    {
        std::cout << "Escreva seu chute entre 1 e 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Muito alto! \n";
        }else if(guess < num){
            std::cout << "Muito baixo! \n";
        }else{
            std::cout << "CORRETO! \n ";
            std::cout << "Numero de tentativas: " << tries;
        }
        

    } while (guess != num);

    
    

    return 0;

}