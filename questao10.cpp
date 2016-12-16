#include <iostream>

using namespace std;

int main(){

    char letra;
    cout << "Insira a letra desejada: ";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o'|| letra == 'u'){
        cout << "A letra e uma vogal" << endl;
    }
    else{
        cout << "A letra e uma consoante" << endl;
    }
    return 0;
}
