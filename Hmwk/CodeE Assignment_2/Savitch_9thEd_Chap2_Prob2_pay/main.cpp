/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 8:05 PM
 * Purpose: Calculating Pay Increase Problem
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
    float oldSlr,//old annual salary
            newSlr,//new annual salary
            amtIncr,//amount annual salary increase
            rtrPay,//retroactive pay over 6 months
            mthSlr;//new monthly salary
    const float payIncr=0.076;//pay increase percentage
    const short MONTHS=12;//12 months in a year

    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>oldSlr;
    
    //Map inputs -> outputs
    amtIncr=oldSlr*payIncr;
    newSlr=oldSlr+amtIncr;
    rtrPay=oldSlr/2*payIncr;//divided by 2 since the pay increase is over 6 months period
    mthSlr=newSlr/MONTHS;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<rtrPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newSlr<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<mthSlr;
    
    //Exit stage right or left!
    return 0;
}

