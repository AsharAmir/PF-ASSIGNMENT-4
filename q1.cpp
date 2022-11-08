#include <iostream>
#include <windows.h>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

//checking if the time is AM
bool isAM(int hours){
    if(hours < 12){
        return true;
    }else{
        return false;
    }
}


int main(){
    int hours = 0, minutes = 0, seconds = 0;//init vars at zero hardcoded to start
    string ampm;
    
    while(true){//declaring AM PM
        if(isAM(hours)){
            ampm = "AM";
        }else{
            ampm = "PM";
        }
        if((seconds % 10) == 0){//UPDATES EVERY 10 SECONDS ON THE SCREEN
            system("CLS");
            cout << hours << " hr " << minutes << " min " << seconds << " sec " << ampm << endl;
        }
        seconds++;//incrementing the seconds
        if(seconds>59){//incrementing minutes
            seconds = 0;
            minutes++;
        }
        if(minutes>12){
            minutes = 0;
            hours++;//incrementing hours
        }
        if(hours>24){
            hours = 0;
            minutes = 0;
            seconds = 0;//resetting
        }
    Sleep(1000);//update function
    
    }
    
}