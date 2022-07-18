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
    float gas,//gas consumed in litters
            mpg;//miles per gallon
    int mls;//miles traveled
    char repeat;//yes or no, whether user wants to repeat the calculation
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>gas;
        gas=gas*LTTR2GAL;//converting liters to gallons
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>mls;
    //Map inputs -> outputs    
        mpg=mls/gas;
    //Display the outputs
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"miles per gallon:"<<endl<<mpg<<endl;
    //Ask the user whether they want to run the program again
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat!='n')
            cout<<endl;
    }while(repeat!='n');
    
    //Exit stage right or left!
    return 0;
}

