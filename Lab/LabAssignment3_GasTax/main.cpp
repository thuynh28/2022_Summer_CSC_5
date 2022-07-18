/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 6, 2022, 3:15 PM
 * Purpose: Lab Assignment 3_ Gas Tax & Profit
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const short PERCENT = 100;//100 percent
const short DLLRTOPNNY = 100;//1$ is 100 pennies

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float   cpg,//cost per gallon of gas in $
            excTax,//state excise tax per gallon in $
            slsTax,//sales tax in $
            ctrTax,//cap and trade fee tax in $
            fedTax,//federal excise tax/gallon
            ttlTax,//total tax amount per gallon
            slsTaxPct,//sales tax percentage
            taxPct,//total tax percentage per gallon
            prof,//profit amount in $
            profPct;//profit percentage
    
    //Initialize or input i.e. set variable values
    excTax=39.0/DLLRTOPNNY;
    slsTaxPct=8.0/PERCENT;
    ctrTax=10.0/DLLRTOPNNY;
    fedTax=18.4/DLLRTOPNNY;
    profPct=6.5/PERCENT;
    
    //Map inputs -> outputs
    cout<<"The amount it cost you per gallon last time you put gas in your car: $";
    cin>>cpg;
    slsTax=cpg*slsTaxPct;
    ttlTax=excTax+slsTax+ctrTax+fedTax;
    taxPct=ttlTax/cpg*PERCENT;
    prof=cpg*profPct;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(3);
    cout<<"Taxes to the Government per Gallon of Gas  : $"<<ttlTax<<endl;
    cout<<"Profit per Gallon of Gas                   : $"<<prof<<endl;
    cout<<"Percentage of Tax per Gallon of gas        : "<<taxPct<<"%"<<endl;
    cout<<"Percentage of Profit per Gallon of gas     : "<<profPct*PERCENT<<"%";
    
    //Exit stage right or left!
    return 0;
}

