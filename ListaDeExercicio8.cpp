#include <iostream>

using namespace std;

int main(){

    int num, mult;
    cin >> num;
    do{
        mult = num * 3;
        num = mult;
        cout << mult << endl;
    }while (mult < 100);
    return 0;
}
