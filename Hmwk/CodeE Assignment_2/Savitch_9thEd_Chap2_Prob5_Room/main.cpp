/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 8:31 PM
 * Purpose: Calculate Room Occupancy and Limits Problem
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
    short rmCap,//maximum room capacity
            nPpl,//number of people attend the meeting
            nExcl;//number of people to exclude to meet the fire regulations
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>rmCap>>nPpl;
    
    //Map inputs -> outputs
    nExcl=nPpl-rmCap;
    
    //Display the outputs
    if(nExcl>0)
    {
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<nExcl<<" people to avoid fire violation.";
    }else
    {
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<-nExcl<<" will be allowed without violation.";
    }
    //Exit stage right or left!
    return 0;
}

