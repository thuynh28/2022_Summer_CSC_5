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
const short PERCENT=100;//100 percent
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prcNow,//current price of an item
           prcPast,//price of item one year ago
            prcDffnt,//price different
            rate;//inflation rate
    char repeat;
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>prcNow;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prcPast;
    //Map inputs -> outputs
        prcDffnt=prcNow-prcPast;
        rate=prcDffnt/prcPast*PERCENT;
    //Display output
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Inflation rate: "<<rate<<"%"<<endl<<endl;
    //Asks user whether they want to repeat
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat!='n')
            cout<<endl;
    }while(repeat!='n');

    //Exit stage right or left!
    return 0;
}

