#include <iostream>
#include <cctype>

using namespace std;

int main(){

    int a;
    string senha;
    getline(cin, senha);
    int t = senha.length();
    int valor = 0;
    for (int i = 0; i < t; i++){
        char c = senha[i];
        a = c;
        if (a >= 48 && a <= 57){
            valor += 1;
        }
        else if (a >= 97 && a <= 122 ){
            valor += 2;
        }
        else if (a >= 65 && a <= 90){
            valor += 3;
        }
        else {
            valor += 5;
        }
    }
    if (valor <= 10){
        cout << valor << ";FRACA" << endl;
    }
    else if (valor <= 20){
        cout << valor << ";MEDIA" << endl;
    }
    else if (valor <= 50){
        cout << valor << ";FORTE" << endl;
    }
    else {
        cout << valor << ";SUPER_FORTE" << endl;
    }
    return 0;
}
