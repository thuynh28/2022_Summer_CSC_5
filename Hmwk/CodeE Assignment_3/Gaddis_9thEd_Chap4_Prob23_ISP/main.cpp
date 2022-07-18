/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 6, 2022, 4:15 PM
 * Purpose: Internet Bill Problem
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
    short hours;//customer's hours of usage
    short hourA,//hours of access for plan A and plan B. Plan C is unlimited
            hourB;
    float rateA,//rate for each plan in $
            rateB,
            rateC;
    float extA,//extra rate for plan A & B after hours of access is reached in $
            extB;
    char plan;//customer's plan
    float bill;//customer's bill in $
    
    //Initialize or input i.e. set variable values
    hourA=10;
    hourB=20;
    rateA=9.95;
    rateB=14.95;
    rateC=19.95;
    extA=2.0;
    extB=1.0;
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>plan>>hours;
    
    //Map inputs -> outputs
    if(hours>744)//input validation: hours cannot exceed 744
        return 0;
    else{
        if(plan=='A'){  //if customer chooses plab A
            bill=(hours>hourA)?(hours-hourA)*extA+rateA:rateA;
        }
        if(plan=='B'){  //if customer chooses plab B
            bill=(hours>hourB)?(hours-hourB)*extB+rateB:rateB;
        }
        if(plan=='C'){  //if customer choose plan C
            bill=rateC;
        }
    }
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Bill = $"<<setw(6)<<bill;
    
    //Exit stage right or left!
    return 0;
}

