#include <iostream>

using namespace std;

int main(){

    int vet[10];
    int c = 0;
    for(int i = 0; i < 10; i++){
        vet[i];
        cout << "Informe o vetor " << i << ": " << endl;
        cin >> vet[i];
    }
    for(int i = 1; i < 10; i++){
        if(vet[0] == vet[i]){
            cout << "Valor repetido: " << vet[0] << endl;
        }
    }
    for(int i = 2; i < 10; i++){
        if(vet[1] == vet[i]){
            cout << "Valor repetido: " << vet[1] << endl;
        }
    }
    for(int i = 3; i < 10; i++){
        if(vet[2] == vet[i]){
            cout << "Valor repetido: " << vet[2] << endl;
        }
    }
    for(int i = 4; i < 10; i++){
        if(vet[3] == vet[i]){
            cout << "Valor repetido: " << vet[3] << endl;
        }
    }
    for(int i = 5; i < 10; i++){
        if(vet[4] == vet[i]){
            cout << "Valor repetido: " << vet[4] << endl;
        }
    }
    for(int i = 6; i < 10; i++){
        if(vet[5] == vet[i]){
            cout << "Valor repetido: " << vet[5] << endl;
        }
    }
    for(int i = 7; i < 10; i++){
        if(vet[6] == vet[i]){
            cout << "Valor repetido: " << vet[6] << endl;
        }
    }
    for(int i = 8; i < 10; i++){
        if(vet[7] == vet[i]){
            cout << "Valor repetido: " << vet[7] << endl;
        }
    }
    for(int i = 9; i < 10; i++){
        if(vet[8] == vet[i]){
            cout << "Valor repetido: " << vet[8] << endl;
        }
    }

    return 0;
}
