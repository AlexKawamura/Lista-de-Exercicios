#include <iostream>

using namespace std;

int main(){

    int v1[10];
    int v2[10];
    int v3[10];
    cout << "Informe os valores do primeiro vetor:" << endl;
    for(int i = 0; i < 10; i++){
        v1[i];
        cout << "Valor do vetor " << i << ": " << endl;
        cin >> v1[i];
    }
    cout << "Informe os valores do segundo vetor:" << endl;
    for(int i = 0; i < 10; i++){
        v2[i];
        cout << "Valor do vetor " << i << ": " << endl;
        cin >> v2[i];
    }
    for(int i = 0; i < 10; i++){
        v3[i];
        if(i%2 == 0){
            v3[i] = v1[i];
        }
        else{
            v3[i] = v2[i];
        }
    }
    cout << "Os valores do terceiro vetor sao:" << endl;
    for(int i = 0; i < 10; i++){
        v3[i];
        cout << "Valor do vetor " << i << ": " << endl;
        cout << v3[i] << endl;
    }

    return 0;
}
