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
    float now,//current price of an item
           past,//price of item one year ago
            future1,//price of item 1 year from now
            future2,//price of item 2 year from now
            prcDffnt,//price different
            rate;//inflation rate
    char repeat;
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:"<<endl;
        cin>>now;
        cout<<"Enter year-ago price:"<<endl;
        cin>>past;
    //Map inputs -> outputs
        prcDffnt=now-past;
        rate=prcDffnt/past*PERCENT;
        future1=now+now*rate/PERCENT;
        future2=future1+future1*rate/PERCENT;
    //Display output
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Inflation rate: "<<rate<<"%"<<endl<<endl;
        cout<<"Price in one year: $"<<future1<<endl;
        cout<<"Price in two year: $"<<future2<<endl<<endl;
    //Asks user whether they want to repeat
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat!='n')
            cout<<endl;
    }while(repeat!='n');

    //Exit stage right or left!
    return 0;
}

