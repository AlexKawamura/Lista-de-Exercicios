#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);
    double dolar, cambioReal, valorReais, IOF, total;
    cout << "Informe a quantidade de dolar que deseja comprar: ";
    cin >> dolar;
    cout << "Insira o valor de cambiodo dolar em real: ";
    cin >> cambioReal;
    valorReais =  dolar * cambioReal;
    IOF = valorReais + 0.38;
    cout << "O total a ser pago e:" << IOF << endl;

    return 0;
}
