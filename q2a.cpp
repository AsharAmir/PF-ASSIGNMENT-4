#include <iostream>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

int main(){
    //taking inputs
    int dia, counter = 0;
    cin >> dia;
    int radius = dia/2;
    int num_Dots = radius - 1;
    int num_Dots_2 = num_Dots;
    int starting_Stars = 3;
    //init loop for dots
    for(; num_Dots > 0; starting_Stars+=2, num_Dots--){
        for(int i = 1; i <= num_Dots; i++){
            cout << ".";
        }
        for(int j = 1; j <= starting_Stars; j++){
            cout << "*";
        }
        for(int k = 1; k <= num_Dots; k++){
            cout << ".";
        }
        cout << endl;
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= dia; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= num_Dots_2; i++, num_Dots++, starting_Stars-=2){
        for(int j = 1; j <= num_Dots; j++){
            cout << ".";
        }
        for(int k = 1; k <= starting_Stars; k++){
            cout << "*";
        }
        for(int l = 1; l <= num_Dots; l++){
            cout << ".";
        }
        cout << endl;
    }

}