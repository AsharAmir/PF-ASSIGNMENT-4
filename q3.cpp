#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;


/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

//update the screen
void Update(){
    Sleep(500);
    system("CLS");
}

//func to print spaces using the setw func
void printSpace(int w){
    cout << setw(w);
}
//printing the characters using ascii. incrementing each time called
void printChar(int charac){
    int c;
    c = 42+charac;
    cout << (char)c;
}
//func that prints the stairs
void Stairs(int steps, int height, int width, int symbol, int w){
  w = width;
  int whiteSpace = width * steps;
  while(true){
    for(int i = steps*width; i > 0; i-=width){ //printing the steps
        printSpace(i + 1);
        for(int j = 1; j <= width; j++){
            printChar(symbol);
        }
        if(i < whiteSpace){ //whitespaces = width*steps
            printSpace(w - width);
            printChar(symbol);
        }
        cout << endl;
        for(int k = 1; k <= height; k++){
            printSpace(i + 1);
            printChar(symbol);
            printSpace(w - 1);
            printChar(symbol);
            cout << endl;
        }
        //incrementing after the loop
        w+=width;
        symbol++;
        //resetting the ascii values to stay within the printing range
        if(symbol>=6){
            symbol = 0;
        }
    }//printing the line at the bottom
    for(int i = 1; i <= whiteSpace + 5; i++){
        cout << "*";
    }
    w = width;
    cout << endl;
    Update(); //func that updates the screen
  }
}

//input validation
bool validate(int input){
    if(input!=0){
        return true;
    }else{
        cout << "Invalid Value Entered!" << endl;
        return false;
    }
}

int main(){
    int steps, height, width, w;
    int symbol = 0; //starting with * (ascii 42)
    cout << "Enter the number of steps: " << endl;
    cin >> steps;
    cout << "Enter the number of height: " << endl;
    cin >> height;
    cout << "Enter the number of width: " << endl;
    cin >> width;
    if(validate(steps) == true && validate(width) == true && validate(height) == true){ //input validation
        Stairs(steps, height, width, symbol, w);
    }
    
}

