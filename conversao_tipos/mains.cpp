#include <iostream>

int main (){

    // basta colocar entre parenteses o tipo que vc deseja converter
    double x = (int) 3.14;
    std::cout << x << std::endl;

    int correct = 8;
    int questions = 10;
    //sem a conversão para double a porcetagem de acertos não é mostrada
    double score = correct/(double)questions * 100;
    std::cout << score << "%";


}