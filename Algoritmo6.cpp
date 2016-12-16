#include <iostream>

using namespace std;

int main(){

    int a, b;
    cout << " Informe o primeiro valor: ";
    cin >> a;
    cout << "Informe o segundo valor: ";
    cin >> b;
    if(a%b == 0){
        cout << "Sao multiplos" << endl;
    }
    else{
        cout << "Nao sao multiplos" << endl;
    }

    return 0;
}
