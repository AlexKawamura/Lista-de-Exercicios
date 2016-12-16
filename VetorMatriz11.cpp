#include <iostream>

using namespace std;

int main(){

    int vetor[9], vetor1[9], vetor2[9], vetor3[9];
    cout << "Informe o primeiro vetor: " << endl;
    for(int i = 0; i < 9; i++){
        cout << "Vetor " << i << ": " << endl;
        cin >> vetor[i];
    }
    cout << "Informe o segundo vetor: " << endl;
    for(int i = 0; i < 9; i++){
        cout << "Vetor " << i << ": " << endl;
        cin >> vetor1[i];
    }
    cout << "Informe o terceiro vetor: " << endl;
    for(int i = 0; i < 9; i++){
        cout << "Vetor " << i << ": " << endl;
        cin >> vetor2[i];
    }
    for(int i = 0; i < 3; i++){
        vetor3[i] = vetor[i];
        vetor3[i+3] = vetor1[i+3];
        vetor3[i+6] = vetor2[i+6];
    }
    cout << "O novo vetor e: " << endl;
    for(int c = 0; c < 9; c++){
        cout << "Vetor " << c << ": " << vetor[c] << endl;
    }

    return 0;
}
