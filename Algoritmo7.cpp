#include <iostream>

using namespace std;

int main(){

    int idadeN;
    cout << "Informe a idade do nadador: ";
    cin >> idadeN;
    if(idadeN > 5 && idadeN < 7){
        cout << "Categoria infantil A" << endl;
    }
    else if(idadeN > 8 && idadeN < 10){
         cout << "Categoria infantil b" << endl;
    }
    else if(idadeN > 11 && idadeN < 13){
        cout << "Categoria juvenil A" << endl;
    }
    else if(idadeN > 14 && idadeN < 17){
        cout << "Categoria juvenil B" << endl;
    }
    else{
        cout << "Categoria adulto" << endl;
    }

    return 0;
}
