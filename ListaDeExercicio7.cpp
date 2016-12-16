#include <iostream>

using namespace std;

int main(){
    int Fn = 0, N;
    int i = 1;
    int c = 0;
    cin >> N;
    do{
        i++;
        Fn = (i - 1) + i;
        i = Fn;
        cout << Fn << endl;
        c++;
    }while(c < N);
    return 0;
}
