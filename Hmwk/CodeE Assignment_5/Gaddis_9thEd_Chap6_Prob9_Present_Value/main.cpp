/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float present,  //present value in $
            future, //future value in $
            rate;   //annual interest rate
    int year;       //number of years to let money sit in account
    //Initialize or input i.e. set variable values
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>future;
    cout<<"Input the Number of Years"<<endl;
    cin>>year;
    cout<<"Input the Interest Rate %/year"<<endl;
    cin>>rate;
    //Map inputs -> outputs
    present=psntVal(future,rate,year);
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The Present Value = $"<<present;
    //Exit stage right or left!
    return 0;
}
//Function to Calculate Present amount that needs to be deposited
float psntVal(float future, float rate, int year){
    float present;
    present=future/pow(1+rate/100,year);
    return present;
}