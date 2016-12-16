#include <iostream>

using namespace std;

int main(){

    int i = 9;
    do{
        i--;
        for(char l = 'a'; l != 'i' ; l++){
            cout << l << i << " ";
        }
    }while(i > 1);

    return 0;
}
