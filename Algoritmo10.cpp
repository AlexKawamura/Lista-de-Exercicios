#include <iostream>

using namespace std;

int main(){

    double indice;
    cout << "Informe o indice de poluicao: ";
    cin >> indice;
    if(indice >= 0.05 && indice <= 0.25){
        cout << "O indice de poluicao esta em um nivel aceitavel" << endl;
    }
    else if(indice >= 0.3){
        cout << "As industrias do 1 grupo devem ser intimadas a suspenderem suas atividades." << endl;
    }
    else if(indice >= 0.4){
        cout << "As industrias do 1� e 2� grupo devem ser intimadas a suspenderem suas atividades." << endl;
    }
    else if(indice >= 0.5){
        cout << "As industrias do 1�, 2� e 3� grupo devem ser intimadas a suspenderem suas atividades." << endl;
    }

    return 0;
}
