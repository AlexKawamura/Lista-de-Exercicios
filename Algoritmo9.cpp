#include <iostream>

using namespace std;

int main(){

    int numid, mediaE, mediaA;
    int notas[3];
    cout << "Informe o numero de identifica��o do aluno: ";
    cin >> numid;
    for(int c = 1; c < 4; c++){
        cout << "Informe a " << c << " nota do aluno: ";
        cin >> notas[c];
        }
    cout << "Informe a media dos exercicios: ";
    cin >> mediaE;
    mediaA = (notas[0] + (notas[1] * 2) + (notas[2] * 3) + mediaE) / 7;
    cout << "A media de aproveitamento do aluno e de: " << mediaA << endl;
    if(mediaA >= 9){
        cout << "A atribui��o de conceito do alune e 'A' " << endl;
    }
    else if(mediaA < 9 && mediaA >= 7.5){
        cout << "A atribui��o de conceito do alune e 'B' " << endl;
    }
    else if(mediaA >= 6 && mediaA < 7.5){
        cout << "A atribui��o de conceito do alune e 'C' " << endl;
    }
    else if(mediaA >= 4 && mediaA < 6){
        cout << "A atribui��o de conceito do alune e 'D' " << endl;
    }
    else if(mediaA < 4){
        cout << "A atribui��o de conceito do alune e 'E' " << endl;
    }

    return 0;
}
