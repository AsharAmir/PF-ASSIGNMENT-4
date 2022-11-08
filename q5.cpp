#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/


using namespace std;
int values(int x, int n);

void plotting(int x, int y, int height, int n){
    //running a decrement loop to go down from max height
    for(int i = height; i >= 0; i--){
        y = -x;
        if(y > 9){
            cout << i << " ";
        }
        else{
            cout << "0" << i << " ";
        }
        do{
            int pt = values(y, n);//finding the points using a do while loop
            if(pt==i){
                cout << "*   ";
            }else{
                cout << "    ";
            }
            y++;
        }while(y<=x);//till x is met
        cout << endl;
        }

        //setting the x axis
        y = -x;
        cout << "   ";
        for(int j = y; j <= x; j++){
            if(j>9){
                cout << j << "   ";
            }else if(j<0){
                cout << j << "   ";
            }else{
                cout << "   " << j << "   ";
            }
        }
}
    
int values(int x, int n){//finding all the values of y for every x in range
        int y = pow(x, n) - pow(x, n-1);
        return y;
}

int ymax(int y, int n, int x, int height){//finding the max extreme value of y
//so we can know how high to plot
    for(int i = y; i <= x; i++){
        int pt = values(i, n);
        if(pt > height){
            height = pt;
            return height;
        }
    }
    
}

int main(){
    int x, n, xmax, xmin, y, height = 0;//inputting the values here
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    if(x<0){
        x*=-1;//converting to negative for the range
    }
    y = -x;
    // int max = pow(xmin, n) - pow(xmin, n-1);
    height = ymax(y, n, x, height);
    plotting(x, y, height, n);
}