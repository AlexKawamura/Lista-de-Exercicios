#include <iostream>

using namespace std;

int main(){

    int vet1[4][4];
    int vet2[4][4];
    int c = 0;
    while(c < 4){
        cout << "Informe os valores da " << c << " linha: " << endl;
        for(int i = 0; i < 4; i++){
            cout << "Informe os valores da coluna " << i << ": " << endl;
            cin >> vet1[c][i];
        }
    c++;
    }
    int j = 0;
    while(j < 4){
        cout << "Informe os valores da " << j << " linha: " << endl;
        for(int i = 0; i < 4; i++){
            cout << "Informe os valores da coluna " << i << ": " << endl;
            cin >> vet2[j][i];
        }
    j++;
    }

    return 0;
}
