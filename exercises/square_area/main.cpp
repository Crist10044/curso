#include <iostream>

double areaQuadrado(double largura){
    double resultado = largura * largura;
    return resultado;
}

int main()
{
    double lado,area;
    std::cout << "Digite o valor do lado do quadrado e vamos calcular a area ";
    std::cin >> lado;
    

    area = areaQuadrado(lado);
    std::cout << "Area = " << area;
    

    return 0;

}   