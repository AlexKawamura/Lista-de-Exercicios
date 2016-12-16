#include <iostream>

using namespace std;

int main(){

    int idade;
    int i = 0;
    int c = 0;
    do{
        cin >> idade;
        ++c;
        if (idade >= 18){
            ++i;
        }
    }while(c != 10);
    cout << i << endl;
    return 0;
}
