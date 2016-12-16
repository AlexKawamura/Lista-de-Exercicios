#include <iostream>

using namespace std;

int main(){

    int x, y;
    cin >> x;
    cin >> y;
    for (int i = x; i <= y; i++){
        if (i%2 == 0){
        }
        else{
            cout << "Numero impar: " << i << endl;
        }
    }
    return 0;
}
