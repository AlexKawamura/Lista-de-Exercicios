#include <iostream>

using namespace std;

int main(){

    int x, y, z;
    cout << "Informe a primeira variavel: ";
    cin >> x;
    cout << "Informe a segundda variavel: ";
    cin >> y;
    z = x;
    x = y;
    y = z;
    cout << "Trocando variaveis..." << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

/* Utilizou-se uma terceira variavel 'z', dessa forma 'z' passou a ter o valor de x, enquanto que x adquiriu valor de y,
e foi atribuido a y o valor de z antes pertencente a x */
