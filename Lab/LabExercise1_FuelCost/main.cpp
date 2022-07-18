/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Fuel Cost Problem- Comparing Cost of Fueling Gas at 2 Stations
 */

//System Libraries
#include <iostream>
using namespace std;
const short PERCENT =100;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pctFull,//percentage of the car's tank that is full
            szeOfTank,//size of car's tank in Gallon
            mpg,//car's gas mileage
            pplOne,//price per gallon at Station 1 before adding mileage to commute back and forth to the gas station
            pplTwo,//price per gallon at Station 2 before adding mileage to commute back and forth to the gas station
            dOne,//distance from current location to Station 1 in miles
            dTwo;//distance from current location to Station 2 in miles
    
    //Initialize Variables
    pctFull=75;
    szeOfTank=22;
    mpg=17;
    pplOne=4.25;
    pplTwo=4.09;
    dOne=10;
    dTwo=20;
    
    //Map inputs to outputs -> The Process
        //Calculating the cost to fill up the tank at each station before adding in mileage to commute:
    float nGalFull=szeOfTank*pctFull/PERCENT;//number of gallons of gas currently in tank
    float nGalNeed=szeOfTank-nGalFull;//number of gallons of gas to filled up
    float cFullOne=nGalNeed*pplOne;//cost to fill up the tank from 75% to full at Gas Station One in $
    float cFullTwo=nGalNeed*pplTwo;//cost to fill up the tank from 75% to full at Gas Station Two in $
    
        //Calculating the cost to refuel distance driving to and from each station:
    float dDrvnOne=dOne*2;//Total Distance driven in Miles back and forth to Gas Station One
    float dDrvnTwo=dTwo*2;//Total Distance driven in Miles back and forth to Gas Station Two
    float nGalOne=dDrvnOne/mpg;//number of gallons of gas required to drive back and forth to Gas Station One
    float nGalTwo=dDrvnTwo/mpg;//number of gallons of gas required to drive back and forth to Gas Station Two
    float cDrvnOne=nGalOne*pplOne;//cost to refuel driving back and forth Gas Station One in $
    float cDrvnTwo=nGalTwo*pplTwo;//cost to refuel driving back and forth to Gas Station Two in $
    
        //Calculating total cost to fill up the tank at each station after adding in mileage:
    float cTtlOne=cFullOne+cDrvnOne;//total cost to fuel up at Gas Station 1 in $
    float cTtlTwo=cFullTwo+cDrvnTwo;//total cost to fuel up at Gas Station 2 in $
    
        //Calculating the actual gas price after adding in mileage:
    float pAftMilOne=cTtlOne/nGalNeed;//price per gallon at Station 1 after adding in mileage to commute back and forth
    float pAftMilTwo=cTtlTwo/nGalNeed;//price per gallon at Station 2 after adding in mileage to commute back and forth
    
    //Display Results
    cout<<"Original price per gallon at Gas Station 1 is: $"<<pplOne<<endl;
    cout<<"Original price per gallon at Gas Station 2 is: $"<<pplTwo<<endl;
    cout<<"Price per gallon when adding in mileage to commute back and forth to Gas Station 1 is: $"
            <<pAftMilOne<<endl;
    cout<<"Price per gallon when adding in mileage to commute back and forth to Gas Station 2 is: $"
            <<pAftMilTwo<<endl;
    
    //Exit stage right
    return 0;
}

