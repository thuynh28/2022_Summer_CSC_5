/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Calculating MPG Problem
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
    unsigned short nGals,//number of gallons of gas the car holds
                   nMiles,//total number of miles the car can go in one tank
                   mPG;//number of miles car can drive per gallon
    
    //Initialize Variables
    nGals=15;//car's tank capacity is 15 gallons
    nMiles=375;//car can travel 375 miles before refueling
    
    //Map inputs to outputs -> The Process
    mPG=nMiles/nGals;//miles per gallon equals to total mileage over total fuel capacity
    
    //Display Results
    cout<<nMiles<<" miles driven/"<<nGals<<" gallons used = "<<mPG<<" mpg"<<endl;
    
    //Exit stage right
    return 0;
}

