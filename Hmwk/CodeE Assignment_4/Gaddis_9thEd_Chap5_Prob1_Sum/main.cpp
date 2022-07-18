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
    unsigned short num,//generic integer
                    input,//positive integer input from user
                    sum;//sum from 1 to input
    
    //Initialize or input i.e. set variable values
    cin>>input;
    num=1;
    sum=0;
    
    //Map inputs -> outputs
    while(num<=input){
          sum+=num;
          num++;        
        };
    
    //Display the outputs
    cout<<"Sum = "<<sum;
    
    //Exit stage right or left!
    return 0;
}

