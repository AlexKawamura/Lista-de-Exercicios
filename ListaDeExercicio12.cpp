#include <iostream>

using namespace std;

int main(){

    double codigo, valor, rm;
    int tipo;
    char cont;
    do{
        cout << "Informe o codigo do cliente: " << endl;
        cin >> codigo;
        cout << "Informe o tipo da conta: " << endl;
        cin >> tipo;
        cout << "Informe o valor a ser investido: " << endl;
        cin >> valor;
        switch (tipo){
            case 1:
                rm = 0.015 * valor;
                if (rm < 0){
                    cout << "O programa terminou" << endl;
                }
                else{
                    cout << "Seu rendimento mensal sera de: " << rm << endl;
                }
            break;
            case 2:
                rm = 0.02 * valor;
                if (rm < 0){
                    cout << "O programa terminou" << endl;
                }
                else{
                    cout << "Seu rendimento mensal sera de: " << rm << endl;
                }
            break;
            case 3:
                rm = 0.04 * valor;
                if (rm < 0){
                    cout << "O programa terminou" << endl;
                }
                else{
                    cout << "Seu rendimento mensal sera de: " << rm << endl;
                }
            break;
        }
        cout << "Deseja informar um novo cliente?[s/n] ";
        cin >> cont;
    }while (cont != 'n');

    return 0;
}
