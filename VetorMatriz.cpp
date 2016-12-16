#include <iostream>

using namespace std;

int main(){

    int num[12], valor1, valor2, soma;
    cout << "Informe os valores dos 12 vetores: " << endl;
    for (int i = 0; i < 12; i++){
        cout << "Vetor " << i << ": ";
        cin >> num[i];
    }
    cout << "Informe 2 valores correspondente a duas posicoes do vetor: ";
    cin >> valor1 >> valor2;
    soma = num[valor1] + num[valor2];
    cout << "A soma das posicoes " << valor1 << " e " << valor2 << " e: " << soma << endl;

    return 0;
}
