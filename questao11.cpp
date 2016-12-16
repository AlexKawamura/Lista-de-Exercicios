#include <iostream>

using namespace std;

int main(){

    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        cout << n1 << " e o maior" << endl;
    }
    else if (n2 > n1 && n2 > n3 && n1 > n4 && n1 > n5){
        cout << n2 << " e o maior" << endl;
        }
        else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
            cout << n3 << " e o maior" << endl;
            }
            else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
                cout << n4 << " e o maior" << endl;
                }
                else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
                    cout << n5 << " e o maior" << endl;
                    }
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
        cout << n1 << " e o menor" << endl;
    }
    else if (n2 < n1 && n2 < n3 && n1 < n4 && n1 < n5){
        cout << n2 << " e o menor" << endl;
        }
        else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
            cout << n3 << " e o menor" << endl;
            }
            else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5){
                cout << n4 << " e o menor" << endl;
                }
                else if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4){
                    cout << n5 << " e o menor" << endl;
                    }

    return 0;
}
