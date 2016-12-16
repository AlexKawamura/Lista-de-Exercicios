#include <iostream>

using namespace std;

int main(){

    int num;
    double d;
    int c = 0;
    cin >> num;
    for (int i = 1; i <= num; i++){
        d = num / i;
        if (num%i == 0)
            c++;
    }
    if (c <= 2){
        cout << "Primo" << endl;
    }
    else{
        cout << "Nao Primo" << endl;
    }
    return 0;
}
