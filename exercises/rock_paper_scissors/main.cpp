#include <iostream>
#include <ctime>

int getUserChoice();
int getComputerChoice();
void showChoice( char choice );
void chooseWinner( char player, char computer );


int main()
{

    int player;
    int computer;

    player = getUserChoice();
    computer = getComputerChoice();

    std::cout << "Sua escolha: ";
    showChoice(player);
    std::cout << "Escolha do computador: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;

}   

int getUserChoice(){
    int player;

    do
    {
        std::cout << "Pedra-Papel-Tesoura Jogo! \n";
        std::cout << "Esolha uma das opcoes \n";
        std::cout << "--------------------------- \n";
        std::cout << "[1] PEDRA \n";
        std::cout << "[2] PAPEL \n";
        std::cout << "[3] TESOURA \n";
        std::cin >> player;
    } while (player != 1 && player != 2 && player != 3 );
    
    return player;
}

int getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    }
    
    return 0;
}


void showChoice( char choice ){

    switch (choice)
    {
    case 1: 
        std::cout << "PEDRA \n";
        break;
    case 2: 
        std::cout << "PAPEL \n";
        break;
    case 3: 
        std::cout << "TESOURA \n";
        break;
    }
}

void chooseWinner( char player, char computer ){

    switch (player)
    {
    case 1:

        switch (computer)
        {
        case 1: std::cout << "empate!";
            break;
        case 2: std::cout << "voce perdeu :( ";
            break;
        case 3: std::cout << "voce ganhou! :D ";
            break;
        }

        break;
    
    case 2:

        switch (computer)
        {
        case 1: std::cout << "voce ganhou! :D ";
            break;
        case 2: std::cout << "empate!";
            break;
        case 3: std::cout << "voce perdeu :( ";
            break;
        }

        break;
    
    case 3:

        switch (computer)
        {
        case 1: std::cout << "voce perdeu :( ";
            break;
        case 2: std::cout << "voce ganhou! :D ";
            break;
        case 3: std::cout << "empate!";
            break;
        }

        break;
    
    default:
        break;
    }
}