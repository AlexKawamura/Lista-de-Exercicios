#include <iostream>

using namespace std;

int main(){

    int numero;
    while(numero > 0){
        cin >> numero;
    if(numero%2 == 0){
        cout << "Turma A" << endl;
    }
    else{
        cout << "Turma B" << endl;
    }
    }

    return 0;
}
