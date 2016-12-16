#include <iostream>

using namespace std;

int main (){

    int andares, altura, predio;
    cout << "Informe o numero de andares: ";
    cin >> andares;
    cout << "Informe a altura de cada andar: ";
    cin >> altura;
    predio = andares * altura;
    cout << "A altura do predio e: " << predio << endl;

    return 0;
}
