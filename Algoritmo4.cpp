#include <iostream>

using namespace std;

int main(){

    int seg, minutos, hor;
    cout << "Informe o tempo de duracao do evento: " << endl;
    cin >> seg;
    hor = seg / 1200;
    minutos = (seg%1200) / 60;
    seg = (seg%1200)%60;
    cout << "O tempo expresso em horas, inutos e segundos e: " << endl;
    cout << hor << "hrs " << minutos << "min " << seg << "seg" << endl;

    return 0;
}
