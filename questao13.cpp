#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    char trajeto;
    double combustivel1, combustivel2;
    cout << "Informe o tipo do trajeto, com 'c' para cidade ou 'e' para estrada: " << endl;
    cin >> trajeto;
    cout << "Informe o redimento da gasolina e do etanol, correspondente ao tipo de trajeto: " << endl;
    cin >> combustivel1 >> combustivel2;
    if (combustivel1 < combustivel2){
        cout << "O mais economico e o gasolina" << endl;
    }
    else if (combustivel2 < combustivel1){
        cout << "O mais economico e o alcool" << endl;
    }
    return 0;
}
