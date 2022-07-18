/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Average of Values_Calculating Average of 5 Values
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float firstVal,//first value given
            secondVal,//second value given
            thirdVal,//third value given
            fourthVal,//fourth value given
            fifthVal,//fifth value given
            nVal,//number of values given
            avgVal;//average of 5 values given
    
    //Initialize Variables
    firstVal=28;
    secondVal=32;
    thirdVal=37;
    fourthVal=24;
    fifthVal=33;
    nVal=5;
    
    //Map inputs to outputs -> The Process
    avgVal=(firstVal+secondVal+thirdVal+fourthVal+fifthVal)/nVal; //average is the sum of the values divided by the number of values
    
    //Display Results
    cout<<"The average of "
            <<firstVal<<" ,"
            <<secondVal<<" ,"
            <<thirdVal<<" ,"
            <<fourthVal<< " and "
            <<fifthVal<< " is "
            <<avgVal<<endl;
    //Exit stage right
    return 0;
}

