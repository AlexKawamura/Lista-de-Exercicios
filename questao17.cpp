#include <iostream>

using namespace std;

int main (){

    double falta, prova1, prova2, prova3, prova4, trabalho1, trabalho2, notaFinal, exame, notaExame;
    cout << "Informe o numero de faltas do aluno: ";
    cin >> falta;
    if ( falta > 36 ){
        cout << "RETIDO" << endl;
    }
    else {
    cout << "Informe a nota da prova 1: ";
    cin >> prova1;
    cout << "Informe a nota da prova 2: ";
    cin >> prova2;
    cout << "Informe a nota da prova 3: ";
    cin >> prova3;
    cout << "Informe a nota da prova 4: ";
    cin >> prova4;
    cout << "Informe a nota do trabalho 1: ";
    cin >> trabalho1;
    cout << "Informe a nota do trabalho 2: ";
    cin >> trabalho2;
    notaFinal = (((prova1 + prova2 + prova3 + prova4) / 4) * 0.7) + (((trabalho1 + trabalho2) / 2) * 0.3);
    if ( notaFinal >= 7 ) {
        cout << "APROVADO" << endl;
    }
    else if (notaFinal >=4 && notaFinal < 7){
        cout << "EXAME" << endl;
    cout << "Informe a nota do exame: ";
    cin >> exame;
    notaExame = (notaFinal + exame) / 2;
    if (notaExame >= 5){
        cout << "APROVADO" << endl;
    }
    else {
        cout << "REPROVADO" << endl;
    }}
    else {
        cout << "REPROVADO" << endl;
    }}
    return 0;
}
