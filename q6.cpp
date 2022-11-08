#include <iostream>
#include <string>


/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

using namespace std;

int main(){

    //storing values and making vars
    int n, count, temp, result, j;
    cout << "Input the starting number: " << endl;
    cin >> n;
    //starting a for loop to ONLY generate 7 numbers
    for(int i = 0; i <= 7; i++){
        cout << n << endl;
        result = 0;
        j = 1;
        //input validation
        if(n==0){
            cout << "Invalid!" << endl;
        }
        while(n!=0){
            //if input is valid
            temp = n % 10;
            n = n / 10;
            count = 1;
            while(temp == n % 10){
                n = n / 10;
                count++;
            }
            result += (((10*count) + temp)*j);//storing the results in a var "result"
            j *= 100;//accounting for tens hundreds thousands system
        }
    n = result;
    }
}