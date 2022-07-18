/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Data Type Sizes problem_ Determine sizes of different data types
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
    unsigned short iSize,//size of int data type in bytes
            cSize,//size of char data type in bytes
            fSize,//size of float data type in bytes
            dSize;//size of double data type in bytes
    
    //Initialize Variables
    iSize=sizeof(int);
    cSize=sizeof(char);
    fSize=sizeof(float);
    dSize=sizeof(double);
    
    //Map inputs to outputs -> The Process
    cout<<"Size of int data type is: "<<iSize<<" bytes"<<endl;
    cout<<"Size of char data type is: "<<cSize<<" bytes"<<endl;
    cout<<"Size of float data type is: "<<fSize<<" bytes"<<endl;
    cout<<"Size of double data type is: "<<dSize<<" bytes"<<endl;
    
    //Display Results
    
    //Exit stage right
    return 0;
}

