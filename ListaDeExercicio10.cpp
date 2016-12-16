#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double doce;
    double e;
    double mesada;
    cout << "Informe sua mesada: ";
    cin >> mesada;
    do{
        cout << "Informe o preco do doce: ";
        cin >> doce;
        e = mesada - doce;
        if (e < 0){
            cout << "Voce nao possui dinheiro suficiente" << endl;
            cout << "Porem voce ainda possui: R$ " << mesada << endl;
        }
        else if (e > 0){
            cout << "Voce ainda possui: R$ " << e << endl;
            mesada = e;
        }
    }while (e != 0);
    if (e == 0){
        cout << "Acabou seu dinheiro" << endl;
    }
    return 0;
}
