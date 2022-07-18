/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENT=100;//conversion to percentage
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short cstSvr;//total number of customer surveyed
    unsigned char prcEnerDrks,//Percent Energy Drinkers
                  prcCitrDrks;//Percent Citrus Drinkers
    //Initialize Variables
    cstSvr=16500;//16500 people were surveyed
    prcEnerDrks=15;//15% of people surveyed drink energy drinks
    prcCitrDrks=58;//58% of people who drink energy drinks prefer citrus flavor
    
    //Map inputs to outputs -> The Process
    unsigned short nEnerDrks=prcEnerDrks*cstSvr/PERCENT; //Number of customers that are energy drinkers
    unsigned short nCitrDrks=nEnerDrks*prcCitrDrks/PERCENT; //Number of customers that are citrus energy drinkers
    
    //Display Results
    cout<<"Numbers of Energy Drinkers are: "<<nEnerDrks<<endl;
    cout<<"Numbers of Citrus Energy Drinkers are: "<<nCitrDrks<<endl;
    //Exit stage right
    return 0;
}

