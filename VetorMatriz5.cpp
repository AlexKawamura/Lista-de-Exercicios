#include <iostream>

using namespace std;

int main(){

    int vetor[40];
    int j = 0;
    for(int i = 0; i < 40; i++){
        vetor[i];
        cout << "Informe o valor do vetor " << i << ": " << endl;
        cin >> vetor[i];
    }
    for(int c = 0; c < 40; c++){
        vetor[c];
        if(vetor[c]%2 == 0){
            j++;
        }
    }
    cout << "Existem " << j << " vetores pares." << endl;

    return 0;
}
