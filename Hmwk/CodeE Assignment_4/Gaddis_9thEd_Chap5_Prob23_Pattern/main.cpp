/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int MIN=1;
    int input;//user input
    char ptn; // pattern        
    //Initialize or input i.e. set variable values
    cin>>input;
    ptn='+';
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int a=MIN;a<=input;a++){ //output first half of the pattern
        for(int b=MIN;b<=a;b++){
            cout<<ptn;
        }
        cout<<endl<<endl;
    }
    for(int c=MIN;c<input;c++){ //output last half of the pattern excluding last line
        for (int d=input;d>=c;d--){
            cout<<ptn;
        }
        cout<<endl<<endl;
    }
    cout<<ptn; //output last line
    
    //Exit stage right or left!
    return 0;
}

