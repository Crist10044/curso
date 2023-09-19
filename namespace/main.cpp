#include <iostream>

namespace first{
    int num = 1;
}


int main (){
    
    //não ultilizei 'using namespace std' para futuramente não ocorrer algum erro de conflito
    using std::cout;
    using std::string;
    using std::endl;

    int num = 0;

    string name = "Cristian";
    cout << "Olá " << name << endl; 

    cout << "namespace local " << num << endl;
    cout << "namespace first " << first::num;

}