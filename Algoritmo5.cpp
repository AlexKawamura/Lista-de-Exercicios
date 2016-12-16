#include <iostream>

using namespace std;

int main(){

    double custoF1, custoF2, custoC;
    cout << "Informe o custo de fabrica: " << endl;
    cin >> custoF1;
    custoF2 = custoF1 * 0.45;
    custoC = custoF2 + 0.28;
    cout << "O custo do consumidor e: " << custoC << endl;

    return 0;
}
