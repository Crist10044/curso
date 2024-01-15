#include <iostream>
#include <cmath>

int main(){
    
    double a,b,c;

    std::cout << "Digite o lado A: ";
    std::cin >> a;

    std::cout << "Digita o lado B ";
    std::cin >> b;

    c = sqrt( pow(a,2) + pow(b,2)  );

    std::cout << "A hipotenusa e: " << c;


}
