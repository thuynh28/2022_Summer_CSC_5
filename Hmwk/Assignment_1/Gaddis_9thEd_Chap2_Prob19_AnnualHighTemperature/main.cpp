/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Paint Problem - How many Gallons for two coats coverage on both sides
 */

//System Libraries
#include <iostream>
using namespace std;
const int PERCENT=100;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float oldTmptNYC,//old average July high temperature(Fahrenheit) in New York City
            oldTmptDenv,//old average July high temperature (Fahrenheit) in Denver
            oldTmptPhnx,//old average July high temperature (Fahrenheit) in Phoenix
            pctTmptRse,//percentage of temperature rise
            tmptRseNYC,//amount of temperature rise (Fahrenheit) in New York
            tmptRseDenv,//amount of temperature rise (Fahrenheit) in Denver
            tmptRsePhnx,//amount of temperature rise (Fahrenheit) in Phoenix
            newTmptNYC,//new average July high temperature (Fahrenheit) in New York City
            newTmptDenv,////new average July high temperature (Fahrenheit) in Denver
            newTmptPhnx;////new average July high temperature (Fahrenheit) in Phoenix
    
    //Initialize Variables
    oldTmptNYC=85;
    oldTmptDenv=88;
    oldTmptPhnx=106;
    pctTmptRse=2;
    
    //Map inputs to outputs -> The Process
    tmptRseNYC=oldTmptNYC*pctTmptRse/PERCENT; //temperature rise amount is 2% of old temperature
    tmptRseDenv=oldTmptDenv*pctTmptRse/PERCENT;
    tmptRsePhnx=oldTmptPhnx*pctTmptRse/PERCENT;
    newTmptNYC=oldTmptNYC+tmptRseNYC;  //new temperature is old temperature plus amount of temperature rise
    newTmptDenv=oldTmptDenv+tmptRseDenv;
    newTmptPhnx=oldTmptPhnx+tmptRsePhnx;
    
    //Display Results
    cout<<"New average July high temperature in New York City is: "<<newTmptNYC<<" degrees Fahrenheit"<<endl;
    cout<<"New average July high temperature in Denver is: "<<newTmptDenv<<" degrees Fahrenheit"<<endl;
    cout<<"New average July high temperature in Phoenix is: "<<newTmptPhnx<<" degrees Fahrenheit"<<endl;

    //Exit stage right
    return 0;
}

