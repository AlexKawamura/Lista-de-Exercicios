#include <iostream>
#include <time.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){

    int x;
    char letra, repetido[20];
    int erro = 0;
    int acerto = 0;
    int i = 0;
    srand (time(NULL));
    string p[10];
    p[0] = "codigo";
    p[1] = "vetor";
    p[2] = "mouse";
    p[3] = "computador";
    p[4] = "notebook";
    p[5] = "teclado";
    p[6] = "botao";
    p[7] = "cabo";
    p[8] = "pendrive";
    p[9] = "numero";

    x = rand()%10 + 0;
    cout << p[x] << endl;
    string palavra = p[x];

    cout << "A palavra possui " << palavra.length() << " letras" << endl;
    while(erro < 6 && acerto < palavra.length()){
        cout << "Digite uma letra: ";
        cin >> letra;
        for(int i = 0; i < palavra.length(); i++){
            if(letra == repetido[i]){
                cout << "Voce ja digitou esta letra: " << letra << endl;
                break;
            }
        }
        for(int i = 0; i < palavra.length(); i++){
            if(palavra[i] == letra && letra != repetido[i]){
                acerto++;
                repetido[i] = letra;
                cout << acerto << endl;
            }
        }
        for(int i = 0; i < palavra.length(); i++){
            if(letra != palavra[i]){
                erro++;
            }
        }
    }

    return 0;
}
