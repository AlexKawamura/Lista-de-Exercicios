#include <iostream>
#include <time.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int x, y;
    int c = 0;
    srand (time(NULL));
    x = rand()%100 + 1;
    cout << x << endl;
    do{
        c++;
        cin >> y;
        if(y > x){
            cout << "seu numero e maior" << endl;
        }
        else if(y < x){
            cout << "seu numero e menor" << endl;
        }
        else{
            cout << "acertou" << endl;
        }
    }while(x != y);
    cout << "tentativas: " << c << endl;
    return 0;
}
