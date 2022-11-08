#include <iostream>
#include <windows.h>

using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/


//error prompts
string error(string err){
    return err;
    cout << err;

}
//input validation
bool validate(double a, double b){
    if((a > 0) && (b > 0)){
        return true;
    }else{
        return false;
    }
}
//function for addition
double add(double a, double b){
    if(validate){
        for(int i = 1; i<=b; i++){
            a++;//using incrementation using a for loop n number of times to add the two numbers
        }return a;
    }else{
        error("Either of the values are less than zero");
    }
}
//function for subtraction
void subtract(double a, double b){
    if(validate){
        int c = 0;//init a count var
        if(a>b){//handling negative results
            while(b<a){
                c++;//incrementing count (the difference between the two nums)
                b++;
            }
            cout << c;
        }else if(b>a){//handling negative results
            int temp;//swapping the two numbers 
            temp = a;
            a = b;
            b = temp;
            while(b<a){
                c++;
                b++;
            }
            }
            cout << "-" << c;
    }else{
        error("Either of the values are less than zero");
    }
}

//function to multiply
double multiply(double a, double b){
    if(validate){
        if(a>b){
            double result = 0;
            for(int i = 1; i <= b; i++){
                result+=a;//adding the number to itself n times
            }return result;
        }else{
            int temp;//handling a scenario where a<b cuz that would cause a flaw
            temp = a;
            a = b;
            b = temp;
            double result = 0;
            for(int i = 1; i <= b; i++){
                result+=a;
            }return result;
        }
    }else{
        error("Either of the values are less than zero");
    }
}
//func to divide
double divide(double a, double b){
    if((validate)&&(b!=0)){//handling zero as denom
        double c = 0;//init a
        while(a>=b){//using a while loop and a count
            a -= b;
            c++;
        }return c;
    }else{
        error("Either of the values are less/equal to zero");
    }
}
//func for modulus
double mod(double a, double b){
    if((validate)&&(b!=0)){//handling zero
        while(a>=b){
            a-=b;
            
        }return a;
    }
}
//main
int main(){
    //declaring all vars
    double a, b;
    char choice;
    system("cls");//clearing the console screen
    //displaying menu, taking in a choice, using a switch to call desired funcs
    cout << "Input an operator from the following: \n + \n - \n / \n * \n % " << endl;
    cin >> choice;
    switch (choice)
    {
    case '+':
        cout << "Input the two numbers to add seperated by a space: " << endl;
        cin >> a >> b;
        cout << a << " + " << b << " = " << add(a,b);
        break;
    case '-':
        cout << "Input the two numbers to subtract seperated by a space: " << endl;
        cin >> a >> b;
        cout << a << " - " << b << " = ";
        subtract(a,b);
        break;
    case '*':
        cout << "Input the two numbers to mulitply seperated by a space: " << endl;
        cin >> a >> b;
        cout << a << " * " << b << " = ";
        cout << multiply(a,b);
        break;
    case '/':
        cout << "Input the two numbers to divide seperated by a space: " << endl;
        cin >> a >> b;
        cout << a << " / " << b << " = " << divide(a,b);
        break;
    case '%':
        cout << "Input the two numbers to calculate the modulus for seperated by a space: " << endl;
        cin >> a >> b;
        cout << a << " % " << b << " = " << mod(a,b);
        break;
    }
}
    
