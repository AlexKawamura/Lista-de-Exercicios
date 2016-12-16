#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int r, r2, r3, r4, r5, r6, r7, r8, r9, r10;
    do{
        r = 1 * i;
        r2 = 2 * i;
        r3 = 3 * i;
        r4 = 4 * i;
        r5 = 5 * i;
        r6 = 6 * i;
        r7 = 7 * i;
        r8 = 8 * i;
        r9 = 9 * i;
        r10 = 10 * i;
        ++i;
        cout << r << endl;
        cout << r2 << endl;
        cout << r3 << endl;
        cout << r4 << endl;
        cout << r5 << endl;
        cout << r6 << endl;
        cout << r7 << endl;
        cout << r8 << endl;
        cout << r9 << endl;
        cout << r10 << endl << endl;
    }while (i != 10);
    return 0;
}
