/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
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
    const float LTTR2GAL= 0.264179;
    float gas1,//gas consumed in litters
            gas2,
            mpg1,//miles per gallon
            mpg2;
    int mls1,//miles traveled
            mls2;
    char repeat;//yes or no, whether user wants to repeat the calculation
    
    //Initialize or input i.e. set variable values
    do{
    //Get inputs and calculate mpg for car 1    
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>gas1;
        gas1=gas1*LTTR2GAL;//converting liters to gallons
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mls1;   
        mpg1=mls1/gas1;
    //Display car 1 mpg
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"miles per gallon:"<<setw(6)<<mpg1<<endl<<endl;
    //Get inputs and calculate mpg for car 1    
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>gas2;
        gas2=gas2*LTTR2GAL;//converting liters to gallons
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mls2;   
        mpg2=mls2/gas2;
    //Display car 2 mpg
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"miles per gallon:"<<setw(6)<<mpg2<<endl<<endl;
    //Compare mpg of 2 cars
        if(mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        if(mpg2>mpg1)
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
    //Ask the user whether they want to run the program again
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat!='n')
            cout<<endl;
    }while(repeat!='n');
    
    //Exit stage right or left!
    return 0;
}

