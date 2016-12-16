#include <iostream>

using namespace std;

int main(){

    int vetor[40];
    for(int i = 0; i < 40; i++){
        vetor[i];
        cout << "Informe o valor do vetor " << i << ": " << endl;
        cin >> vetor[i];
    }
    for(int c = 0; c < 40; c++){
        vetor[c];
        if(vetor[c] < 0){
            vetor[c] = 0;
        }
    }
    for(int j = 0; j < 40; j++){
        vetor[j];
        cout << "Valores corrigidos: " << vetor[j] << endl;
    }

    return 0;
}
