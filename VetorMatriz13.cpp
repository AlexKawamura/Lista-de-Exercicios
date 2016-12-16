#include <iostream>

using namespace std;

int main(){

    int vet[10];
    int c = 0;
    for(int i = 0; i < 10; i++){
        cout << "Informe o valor do vetor " << i << endl;
        cin >> vet[i];
    }
    for(int i = 0; i < 10; i++){
        if(vet[i] == 0){
            vet[10-c] = vet[i];
            if(vet[i+1] != 0){
                vet[i] = vet[i+1];
            }
            else if(vet[i+2] != 0){
                    vet[i] = vet[i+2];
            }
                if(vet[i+2] != 0){
                    vet[i+1] = vet[i+2];
                }
                else if(vet[i+3] != 0){
                    vet[i+1] = vet[i+3];
                }
            c++;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }

    return 0;
}
