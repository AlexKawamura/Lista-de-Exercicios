#include <iostream>

using namespace std;

int main(){

    int dia, ano, mes, dia2;
    cout << "Informe sua idade expressa em dias: " << endl;
    cin >> dia;
    ano = dia / 365;
    mes = (dia%365) / 30;
    dia2 = (dia%365)%30;
    cout << "Sua Idade em ano, mes e dia e: " << endl;
    cout << "Anos: " << ano << endl;
    cout << "Meses: " << mes << endl;
    cout << "Dias: " << dia2 << endl;

    return 0;
}
