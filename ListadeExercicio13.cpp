#include <iostream>

using namespace std;

int main(){

    int opcao, i = 1;
    double nota, nota2 = 0, ma, mp, peso, peso2;
    cout << "Menu de opcoes:" << endl;
    cout << "[1] Media aritmetica" << endl;
    cout << "[2] Media ponderada" << endl;
    cout << "[3] Sair" << endl;
    cout << " " << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;
        switch (opcao){
            case 1:
                do{
                    cout << "Informe as notas: " << endl;
                    cin >> nota;
                    if (nota >=0){
                        ma = (nota + nota2)/i;
                        nota2 = nota;
                        i++;
                    }
                }while(nota >= 0);
                cout << "Media = " << ma << endl;
                break;
            case 2:
                do{
                    cout << "Informe as notas: " << endl;
                    cin >> nota;
                    cout << "Informe o peso da nota: " << endl;
                    cin >> peso;
                    mp =(nota * peso) + (nota2 * peso2)/i;
                    nota2 = nota;
                    peso = peso2;
                    i++;
                }while (nota >= 0 && peso >= 0);
                cout << "Media = " << mp << endl;

        }
    return 0;
}
