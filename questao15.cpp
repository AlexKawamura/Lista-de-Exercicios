#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Informe o ano: ";
    cin >> x;
    if (x % 4 == 0 || x % 400 == 0){
        cout << "E ano bissexto" << endl;
    }
    else {
        cout << "Nao e ano bissexto" << endl;
    }
    return 0;
}
