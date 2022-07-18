/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 12:45 PM
 * Purpose: Calculating Proper Insurance Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const short PERCENTAGE=100;//100 percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int price,//property's price
        insAmt;//amount of insurance property owner should buy
    float insPct;//percentage of house price to insure
    
    //Initialize or input i.e. set variable values
    insPct=80.0/PERCENTAGE;
    
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>price;
    
    //Map inputs -> outputs
    insAmt=price*insPct;
    
    //Display the outputs
    cout<<"You need $"<<insAmt<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}

