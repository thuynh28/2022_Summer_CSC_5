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
    short bks, //number of books purchased
            pts; //number of points earned
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bks;
    
    //Map inputs -> outputs
    switch(bks)
    {
        case 0: //if purchase 0 book, earn 0 points
            pts=0;
            break;
        case 1: //if purchase 1 book, earn 5 points
            pts=5;
            break;
        case 2: //if purchase 2 books, earn 15 points
            pts=15;
            break;
        case 3: //if purchase 3 books, earn 30 points
            pts=30;
            break;
        default: //earn 60 points if purchase more than 3
            pts=60;
            break;
    }                
            
    //Display the outputs
    cout<<"Books purchased ="<<setw(3)<<bks<<endl;
    cout<<"Points earned   ="<<setw(3)<<pts;
    
    //Exit stage right or left!
    return 0;
}

