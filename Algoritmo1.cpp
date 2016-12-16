#include <iostream>

using namespace std;

int main(){

    int ano, mes, dia, dia2, anodia, mesdia;
    cout << "Informe a idade expressa em anos: " << endl;
    cin >> ano;
    cout << "Informe a idade expressa em meses: " << endl;
    cin >> mes;
    cout << "Informe a idade expressa em dias: " << endl;
    cin >> dia;
    anodia = ano * 365;
    mesdia = mes * 30;
    dia2 = anodia + mesdia + dia;
    cout << "Sua idade expressa em dias e: " << dia2 << endl;

    return 0;
}
