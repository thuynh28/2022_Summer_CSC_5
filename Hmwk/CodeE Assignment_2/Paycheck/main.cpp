/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const short WRKHOUR=40;//40 hour work week

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short hrs;//working hours
    float pph,//pay per hour
            ttlPaid;//total paid
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pph>>hrs;
    
    //Map inputs -> output
    ttlPaid=(hrs>WRKHOUR)?(hrs-WRKHOUR)*pph+hrs*pph:hrs*pph;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Paycheck = $"<<setw(7)<<ttlPaid;
    
    //Exit stage right or left!
    return 0;
}

