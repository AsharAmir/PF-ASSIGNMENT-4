#include <iostream>
#include <cmath>

using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

int main(){
    int stop, a, b, c = 0, x = 2;
    cout << "Enter a range for all sides: ";
    cin >> stop;
    cout << "Side-a" << "   " << "Side-b" << "   " << "Hypotenuse" << endl;
    cout << "-------------------------" << endl;
    while(c < stop){
        //a for loop to increment and test all values
        for(int i = 1; i <= x; i++){

            //formula to find the pythagorean triplets
            a = pow(x, 2) - pow(i, 2);
            b = 2 * x * i;
            c = pow(x, 2) + pow(i, 2);
            if(c > stop){
                break;
            }
            if(a!=0 && b!=0 && c!=0){
                cout << a << "           " << b << "         " << c << "   " << endl;
                //pringing a as b and b as a aswell
                cout << b << "           " << a << "         " << c << "   " << endl;
            }
        }
        x++;//incrementing the loop as we go
    
    }

}