#include <iostream>

using namespace std;

int main () {

    int data, mes, ano;
    cout << "Informe a data de seu aniversario :";
    cin >> data;
    cin >> mes;
    cin >> ano;
    if ( data > 31 || mes > 12 || ano > 2016 ) {
    cout << "Data invalida, pois dia, mes ou ano nao existe" << endl;
    }
    else {
    cout << "Data valida" << endl;
    }
return 0;
}
