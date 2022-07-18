/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 1:05 PM
 * Purpose: Converting Fahrenheit to Celsius Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float fTemp,//temperature in Fahrenheit
            cTemp;//temperature in Celsius
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>fTemp;
    
    //Map inputs -> outputs
    cTemp=5.0/9*(fTemp-32);
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<fTemp<<" Degrees Fahrenheit = "<<cTemp<<" Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}

