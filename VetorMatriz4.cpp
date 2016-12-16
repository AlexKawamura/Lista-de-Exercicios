#include <iostream>

using namespace std;

int main(){

    int vetor[20];
    int x;
    for(int i = 0; i < 20; i++){
        cout << "Informe o valor do vetor " << i << ": " << endl;
        cin >> vetor[i];
    }
    cout << "Informe o valor: ";
    cin >> x;
    for(int c = 0; c < 20; c++){
        vetor[c];
        if(vetor[c] == x){
            cout << "O valor se encontra na posicao: " << c << endl;
        }
    }

    return 0;
}
