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
        cout << "As industrias do 1º e 2º grupo devem ser intimadas a suspenderem suas atividades." << endl;
    }
    else if(indice >= 0.5){
        cout << "As industrias do 1º, 2º e 3º grupo devem ser intimadas a suspenderem suas atividades." << endl;
    }

    return 0;
}
