#include <iostream>

using namespace std;

int main(){

    int si = 0;
    int sp = 0;
    int x;
    int i = 0;
    for (int i = 0; i < 10; i++){
        cin >> x;
        if (x % 2 == 0){
            sp = sp + x;
            x = sp;
        }
        else {
            si = si + x;
            x = si;
        }
    }
    cout << sp << endl;
    cout << si << endl;
    return 0;
}
