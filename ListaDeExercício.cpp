#include <iostream>

using namespace std;

int main(){

    double s;
    int num;
    double c = 1;
    cin >> num;
    do{
    s = 1 + (1 / c);
    ++c;
    }while (c != num);
    cout << s << endl;
    return 0;
}
