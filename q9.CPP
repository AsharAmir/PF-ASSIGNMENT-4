#include <iostream>
#include <iomanip>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

//plotting the y axis and the values
void charty(int yn1, int yn2, int yn3, int yn4, int yn5){
    int ymin = yn1;
    int ymax = yn5;
    //making string for chars and spaces
    string s1 = "      *";
    string s11 = "       ";
    string s2 = "  *";
    string s22 = "     ";

    //for loop to start from the max value and reach bottom and plot as it decrements
    for(int i = ymax; i >= 1; i--){
        if(i==ymax){
            cout << i;
        }else{
            cout << "0" << i;
        }

        if(yn1 > 9){
            if(yn1 >= i){
            cout << s2;
            }else{
            cout << s22;
            }
        }else{
            if(yn1 >= i){
            cout << s1;
            }else{
            cout << s11;
            }
        }
        
        if(yn2 > 9){
            if(yn2 >= i){
            cout << s2;
            }else{
            cout << s22;
            }
        }else{
            if(yn2 >= i){
            cout << s1;
            }else{
            cout << s11;
            }
        }

        if(yn3 > 9){
            if(yn3 >= i){
            cout << s2;
            }else{
            cout << s22;
            }
        }else{
            if(yn3 >= i){
            cout << s1;
            }else{
            cout << s11;
            }
        }

        if(yn4 > 9){
            if(yn4 >= i){
            cout << s2;
            }else{
            cout << s22;
            }
        }else{
            if(yn4 >= i){
            cout << s1;
            }else{
            cout << s11;
            }
        }

        if(yn5 > 9){
            if(yn5 >= i){
            cout << s2;
            }else{
            cout << s22;
            }
        }else{
            if(yn5 >= i){
            cout << s1;
            }else{
            cout << s11;
            }
        }

        cout << endl;
        
        
        
    }
}


//plotting the x axis
void chartx(){
    for(int i = 0; i <= 5; i++){
        cout << i;
        cout << "    ";
    }
    cout << endl;
}

int main(){

    //declaring vars and taking in inputs
    int yn1, yn2, yn3, yn4, yn5;
    cout << "Input 5 numbers for y seperated with a space starting with the smallest first: " << endl;
    cin >> yn1 >> yn2 >> yn3 >> yn4 >> yn5;
    cout << endl;
    cout << endl;
    //plotting
    charty(yn1, yn2, yn3, yn4, yn5);
    cout << endl;
    //adding spaces
    cout << "        ";
    chartx();
    
    
}

