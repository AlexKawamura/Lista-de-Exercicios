#include <iostream>

using namespace std;

int main(){

    int num;
    int i = 0;
    int c = 0;
    do{
        cin >> num;
        ++c;
        if (num >= 10 && num <= 110){
            ++i;
        }
    }while(c != 10);
    cout << i << endl;
    return 0;
}
