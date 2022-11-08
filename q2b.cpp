#include<iostream>
using namespace std;
// done in a single loop!

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

int main(){
    int n;
    cout << "Input the max number of stars: " << endl;      
    cin >> n;
    for (int i = 1; i <= n*2-1; i++) {
        if (i <= n){
            for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            if (j % 2 != 0) {
                cout << "_";
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
        }else{
            for (int j = 1; j <= n*2 - i; j++) {
                cout << "*";
            }
            for (int j = 1; j <= i-n; j++) {
                if (j % 2 == 0) {
                    cout << ".";
                }
                else {
                    cout << "_";
                }
            }
            cout << endl;
        }
}
}