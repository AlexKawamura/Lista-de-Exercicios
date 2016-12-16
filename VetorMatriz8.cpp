#include <iostream>

using namespace std;

int main(){

    int vetor[10];
    for(int i = 0; i < 10; i++){
        vetor[i];
        cout << "Informe o valor do vetor " << i << ": " << endl;
        cin >> vetor[i];
    }
    for(int i = 0; i < 10; i++){
        vetor[i+1] = vetor[i] + vetor[i+1];
    }
    cout << "----------------" << endl;
    cout << "O novo vetor e: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Vetor " << i << ": " << endl;
        cout << vetor[i] << endl;
    }

    return 0;
}
