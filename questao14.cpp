#include <iostream>

using namespace std;

int main(){

    int publico;
    cout << "Informe a quantidade do publico: ";
    cin >> publico;
    if (publico <= 1000){
        cout << "Publico baixo" << endl;
    }
    else if (publico > 1000 && publico <= 10000){
        cout << "Publico medio" << endl;
    }
        else if (publico > 10000){
            cout << "Publico bom" << endl;
        }
    return 0;
}
