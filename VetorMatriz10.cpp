#include <iostream>

using namespace std;

int main(){

    int vetor[5];
    cout << "Informe os caracteres do numero: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Caractere " << i << ": " << endl;
        cin >> vetor[i];
    }
    cout << "Numero por extenso: " << endl;
    for(int c = 0; c < 5; c++){
        cout << vetor[c];

    }

    return 0;
}
