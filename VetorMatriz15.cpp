#include <iostream>

using namespace std;

int main(){

    int vet[5][5];
    for(int i = 0; i < 5; i++){
        vet[0][0] = 1;
        vet[0][i+1] = 0;
    }
    for(int i = 0; i < 5; i++){
        vet[1][1] = 1;
        if(vet[1][i] != vet[1][1]){
            vet[1][i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        vet[2][2] = 1;
        if(vet[2][i] != vet[2][2]){
            vet[2][i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        vet[3][3] = 1;
        if(vet[3][i] != vet[3][3]){
            vet[3][i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        vet[4][4] = 1;
        if(vet[4][i] != vet[4][4]){
            vet[4][i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        cout << vet[0][i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << vet[1][i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << vet[2][i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << vet[3][i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << vet[4][i] << " ";
    }

    return 0;
}
