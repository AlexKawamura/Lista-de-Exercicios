#include <iostream>

using namespace std;

int main(){

    int vetor[16];
    int x;
    cout << "Informe os 16 vetores: " << endl;
    for(int c = 0; c < 16; c++){
        cout << "Vetor " << c << ": " << endl;
        cin >> vetor[c];
    }
    for(int i = 0; i < 8; i++){
        x = vetor[i];
        vetor[i] = vetor[i+8];
        vetor[i+8] = x;
    }
    for(int j = 0; j < 16; j++){
        cout << "Vetor " << j << ": " << vetor[j] << endl;
    }

    return 0;
}
