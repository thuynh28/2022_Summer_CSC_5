/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const short DEGREE=180;//180 degree angle
const float PI=3.14159265358979323846;

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short deg;//angle input in degree
    float rad,//angle in radiant
            sine,//sine of angle
            cosine,//cosine of angle
            tangent;//tangent of angle
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>deg;
    
    //Map inputs -> outputs
    rad=deg*PI/DEGREE;//converting angle from degree to radiant
    sine=sin(rad);
    cosine=cos(rad);
    tangent=tan(rad);
    
    //Display the outputs
    cout<<fixed<<showpoint;
    cout<<"sin("<<deg<<") = "<<setprecision(4)<<sine<<endl;
    cout<<"cos("<<deg<<") = "<<setprecision(4)<<cosine<<endl;
    cout<<"tan("<<deg<<") = "<<setprecision(4)<<tangent;
    
    //Exit stage right or left!
    return 0;
}
