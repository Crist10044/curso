#include <iostream>

double totalNotas(double notas[], int tamanho);

int main(){

    double notas[] = {5, 8, 9.5, 10};
    std::string cor[3];

    cor[0] = "Azul";
    cor[1] = "Laranja";
    cor[2] = "Roxo";

    for (int i = 0; i < sizeof(cor)/sizeof(std::string) ; i++)
    {
        std::cout << cor[i] << '\n';
    }

    std::cout << "--------------- \n";
    // melhor forma de mostrar os valores de um array 

    for (double notas : notas)
    {
        std::cout << notas << '\n';
    }

    int tamanho = sizeof(notas)/sizeof(notas[0]);
    double total = totalNotas(notas,tamanho);

    std::cout << "Total: " << total;
    
    return 0;
}

double totalNotas(double notas[], int tamanho){
    double total = 0;
    
    for (int i = 0; i < tamanho; i++)
    {
        total += notas[i];
    }

    return total;
    
}