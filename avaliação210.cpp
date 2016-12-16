#include <iostream>

using namespace std;

int main(){

    string frase, frase2;
    int numero;
    cin >> frase;
    cin >> numero;
    for(int i = 0; i != frase.length(); i++){
        frase2[i] = frase[i] + numero;
        cout << frase2[i];
    }

    return 0;
}
