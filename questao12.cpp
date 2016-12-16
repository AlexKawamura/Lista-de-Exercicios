#include <iostream>

using namespace std;

int main(){

    int idade;
    cout << "Informe a idade: ";
    cin >> idade;
    if (idade >= 10 && idade <= 14){
        cout << "Voce pertence a categoria infantil" << endl;
    }
    else if(idade >= 15 && idade <= 17){
        cout << "Voce pertence a categoria juvenil" << endl;
        }
        else if (idade >= 18 && idade <= 25){
            cout << "Voce pertence a categoria adulto" << endl;
        }
    return 0;
}
