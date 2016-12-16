#include <iostream>

using namespace std;

int main(){

    double nota1, nota2, nota3, mfinal;
    cout << "Informe a nota da primeira prova: " << endl;
    cin >> nota1;
    cout << "Informe a nota da segunda prova: " << endl;
    cin >> nota2;
    cout << "Informe a nota da terceira prova: " << endl;
    cin >> nota3;
    mfinal = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
    cout << "A media final do aluno e: " << mfinal << endl;

    return 0;
}
