/* 
  * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Paint Problem - How many Gallons for two coats coverage on both sides
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
    float pCvg,     //Coverage of a gallon of paint ft^2
          fncHgt,   //Fence height in ft
          fncLen;   //Fence length in ft
    int nGalns;     //Number of Gallons of paint required
    
    //Initialize Variables
    pCvg=3.4e2f;     //one gallon covers 340 square feet
    fncHgt=6.0e0f;   //fence is 6feet tall
    fncLen=1.0e2f;   //fence is 100feet long
    
    //Map inputs to outputs -> The Process
    float srfArea=fncHgt*fncLen;    //Surface area of 1 side of fence
    float srfCov=srfArea*2*2;       //Need to paint both sides, each side twice
    nGalns=srfCov/pCvg+1;           //Integer number of Gallons of Paint
    
    //Display Results
    std::cout<<"Fence Height                            = "<<fncHgt<<" feet "<<endl;
    std::cout<<"Fence Length                            = "<<fncLen<<" feet "<<endl;
    std::cout<<"Paint Coverage                          = "<<pCvg<<" feet^2"<<endl;
    std::cout<<"Number of Gallons of Paint Required     = "<<nGalns<<" gallons"<<endl;
    
    //Exit stage right
    return 0;
}

