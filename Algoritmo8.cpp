#include <iostream>

using namespace std;

int main(){

    double saldoM, credito;
    cout << "Informe o saldo medio do cliente: ";
    cin >> saldoM;
    if(saldoM >= 0 && saldoM <= 200){
        cout << "Nenhum crédito" << endl;
    }
    else if(saldoM >= 201 && saldoM <= 400){
        credito = (saldoM * 20) / 100;
        cout << "Seu saldo medio e de R$" << saldoM << endl;
        cout << "Seu valor do credito e de R$" << credito << endl;
    }
    else if(saldoM >= 401 && saldoM <= 600){
        credito = (saldoM * 30) / 100;
        cout << "Seu saldo medio e de R$" << saldoM << endl;
        cout << "Seu valor do credito e de R$" << credito << endl;
    }
    else if(saldoM >= 601){
        credito = (saldoM * 40) / 100;
        cout << "Seu saldo medio e de R$" << saldoM << endl;
        cout << "Seu valor do credito e de R$" << credito << endl;
    }

    return 0;
}
