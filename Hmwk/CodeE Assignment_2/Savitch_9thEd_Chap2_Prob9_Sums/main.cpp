/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 9:30 PM
 * Purpose: Sum of Positive, Negative and All Numbers Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    short num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;//10 number inputs from user
    short negSum,//sum of negative numbers
            posSum,//sum of positive numbers
            allSum;//sum of all numbers
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;//ask for 10 integer inputs from user
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    
    //Map inputs -> outputs
    negSum+=num1<=0?num1:0;
    negSum+=num2<=0?num2:0;
    negSum+=num3<=0?num3:0;
    negSum+=num4<=0?num4:0;
    negSum+=num5<=0?num5:0;
    negSum+=num6<=0?num6:0;
    negSum+=num7<=0?num7:0;
    negSum+=num8<=0?num8:0;
    negSum+=num9<=0?num9:0;
    negSum+=num10<=0?num10:0;
    posSum+=num1>0?num1:0;
    posSum+=num2>0?num2:0;
    posSum+=num3>0?num3:0;
    posSum+=num4>0?num4:0;
    posSum+=num5>0?num5:0;
    posSum+=num6>0?num6:0;
    posSum+=num7>0?num7:0;
    posSum+=num8>0?num8:0;
    posSum+=num9>0?num9:0;
    posSum+=num10>0?num10:0;
    allSum=negSum+posSum;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<allSum;
    //Exit stage right or left!
    return 0;
}

