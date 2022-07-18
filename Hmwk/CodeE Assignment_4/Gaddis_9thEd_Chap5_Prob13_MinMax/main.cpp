/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 6, 2022, 10:15 PM
 * Purpose: Min Max Problem
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
    int num,//integer user inputs
            min,//smallest number
            max;//largest number
    //Initialize or input i.e. set variable values
    cin>>num;
    min=max=num;//set the first integer input as both min and max
    while(num!=-99){//entering -99 will end the program
        cin>>num;
        if(num>max)//if the new number input is bigger than max, replace max with new input
            max=num;
        if(num!=-99){//as long as new input is different than -99,
            if(num<min)//if the new input is smaller than min, replace min with new input
                min=num;
        }
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    
    //Exit stage right or left!
    return 0;
}

