/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Calculating sale before and after tax problem
 */

//System Libraries
#include <iostream>
using namespace std;
const int PERCENT=100;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float itm1Price,  //price of first item purchased in dollars
            itm2Price,//price of second item purchased in dollars
            itm3Price,//price of 3rd item purchased in dollars
            itm4Price,//price of 4th item purchased in dollars
            itm5Price;//price of 5th item purchased in dollars
    unsigned short taxPrc;//tax percentage on sale        
    
    //Initialize Variables
    itm1Price=15.95;
    itm2Price=24.95;
    itm3Price=6.95;
    itm4Price=12.95;
    itm5Price=3.95;
    taxPrc=7;
    
    //Map inputs to outputs -> The Process
    float slsB4Tax=itm1Price+itm2Price+itm3Price+itm4Price+itm5Price; //total sale before tax in dollars
    float taxAmt=slsB4Tax*taxPrc/PERCENT; //tax amount on the total sale of 5 items in dollars
    float slsTotal=slsB4Tax+taxAmt; //total sale after tax in dollars
    
    //Display Results
    cout<<"Price of item 1: $"<<itm1Price<<endl;
    cout<<"Price of item 2: $"<<itm2Price<<endl;
    cout<<"Price of item 3: $"<<itm3Price<<endl;
    cout<<"Price of item 4: $"<<itm4Price<<endl;
    cout<<"Price of item 5: $"<<itm5Price<<endl;
    cout<<"Subtotal of sale before Tax: $"<<slsB4Tax<<endl;
    cout<<"Tax amount on the sale: $"<<taxAmt<<endl;
    cout<<"Total sale after Tax: $"<<slsTotal<<endl;
    //Exit stage right
    return 0;
}

