#include <iostream>
#include <iomanip>

void mostrarSaldo(double saldo);
double deposito();
double retirada( double saldo);

int main()
{
   
    double saldo = 0;
    int escolha = 0;

    do{

        std::cout << "Digite o que deseja fazer \n";
        std::cout << "----------------------------\n";
        std::cout << "1. Mostrar saldo \n";
        std::cout << "2. Depositar dinheiro \n";
        std::cout << "3. Retirar dinheiro\n";
        std::cout << "4. Sair \n";
        std::cin >> escolha;

        std::cin.clear();
        fflush(stdin);

        switch (escolha)
        {
        case 1:
            mostrarSaldo(saldo);
            break;

        case 2:
            saldo += deposito();
            mostrarSaldo(saldo);
            break;
        case 3:
            saldo -= retirada(saldo);
            mostrarSaldo(saldo);
            break;
        case 4:
            std::cout << "Obrigado por visitar nosso banco! \n";
            break;
        
        default:
            std::cout << "Escola invalida";
            break;
        }

    } while(escolha !=4);

    return 0;

}   

void mostrarSaldo(double saldo){
     std::cout << "SALDO: R$ " << std::setprecision(2) << std::fixed << saldo << '\n';
}

double deposito(){
    double valor = 0;

    std::cout << "Digite o valor a ser depositado: ";
    std::cin >> valor;

    if (valor > 0)
    {
        return valor;
    } else {
        std::cout << "Este nao é um valor valido";
        return 0;
    }
    
}

double retirada(double saldo){
    double valor = 0;
    
    std::cout << "Digite o valor a ser retirado: ";
    std::cin >> valor;

    if (valor > saldo)
    {
        std::cout << "Saldo insuficiente \n";
        return 0;
    } else if(valor < 0 ){
        std::cout << "Este nao e um valor valido \n";
        return 0;
    } else{
        return valor;
    }
    
}
