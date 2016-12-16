#include <iostream>

using namespace std;

int main(){

    double peso[100], pesoT, sobra, peso1;
    int x = 0;
    do{
        cin >> peso1;
        if(peso1 > 0){
            peso[x] = peso1;
            pesoT = pesoT + peso[x];
            sobra = 100 - pesoT;
            x++;
        }
    }while(pesoT <= 100 && peso1 > 0);
    cout << "Caixas inseridas: " << x << endl;
    cout << "Peso Total: " << pesoT << endl;
    cout << "Ainda sobrou: " << sobra << endl;
    cout << "# # Caixas # #" << endl;
    cout << "Numero da caixa    Peso" << endl;
    for(int i = 0; i != x; i++){
        cout << i << "                  " << peso[i] << endl;
    }

    return 0;
}
