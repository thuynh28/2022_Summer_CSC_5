/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 6, 2022, 8:45 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    const short PNNYTODLLR=100.0;//1 dollar = 100 pennies
    float pay,//pay per day
            slry;//salary total
    short num,
            day;//days worked
    
    //Initialize or input i.e. set variable values
    num=1;
    slry=0;
    cin>>day;
    
    //Map inputs -> outputs
    if(day<1)
        return 0;
    else{
       while(num<=day){
           pay=pow(2,num-1)/PNNYTODLLR;
           slry+=pay;
           num++;
       } 
    }
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Pay = $"<<slry;
    //Exit stage right or left!
    return 0;
}

