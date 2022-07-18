/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
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
    float num1,//first number
            num2,//second number
            num3;//third number
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cin>>num1;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>num2;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>num3;
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Largest number from two parameter function:"<<endl;
    if(num1<num2)
        cout<<num2<<endl<<endl;
    if(num1>num2)
        cout<<num1<<endl<<endl;
    cout<<"Largest number from three parameter function:"<<endl;
    if(num2<num1&&num3<num1)
        cout<<num1<<endl;
    if(num1<num2&&num3<num2)
        cout<<num2<<endl;
    if(num1<num3&&num2<num3)
        cout<<num3<<endl;
    
    //Exit stage right or left!
    return 0;
}

