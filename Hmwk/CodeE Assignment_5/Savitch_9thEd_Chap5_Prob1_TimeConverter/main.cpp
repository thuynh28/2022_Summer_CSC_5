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
void getUsrInp(int&,int&);
void timeCvrsn(int,int&,string&);
void rsltOutput(int,int,int,string);
void wrongOutput(int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int hrB,        //hour before
            hrA,    //hour after
            min;   //minute after
    char repeat;    //repeat program or not
    string ampm;    //AM or PM
    //Initialize or input i.e. set variable values
    cout<<"Military Time Converter to Standard Time"<<endl;
    cout<<"Input Military Time hh:mm"<<endl;
    //Map inputs -> outputs
    do{
        getUsrInp(hrB,min);
        if(hrB>24||hrB<0||min<0||min>60)    //Input validation
        {
            wrongOutput(hrB,min);
        }else
        {
            timeCvrsn(hrB,hrA,ampm);
            rsltOutput(hrB,min,hrA,ampm);
        }
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>repeat;
    }while(repeat!='n'&&repeat!='N');
    //Exit stage right or left!
    return 0;
}
//Function to get user inputs
void getUsrInp(int& hrB,int& min){
    cin>>hrB;
    cin.ignore();
    cin>>min;
}
//Function to convert time from 24-hour to 12-hour notation
void timeCvrsn(int hrB,int& hrA,string& ampm){
    if(hrB==12)
    {
        hrA=hrB;
        ampm="PM";
    }else if(hrB>12)
    {
        hrA=hrB-12;
        ampm="PM";
    }else if (hrB==0)
    {
        hrA=12;
        ampm="AM";
    }else
    {
        hrA=hrB;
        ampm="AM";
    }
}
//Function to let user know they have input an invalid time
void wrongOutput(int hrB,int minB){
    cout<<hrB<<":"<<minB<<" is not a valid time"<<endl;
}
//Function to output time after conversion
void rsltOutput(int hrB,int min,int hrA,string ampm){
    cout<<setfill('0')<<setw(2)<<hrB<<":"<<setfill('0')<<setw(2)<<min<<" = "
            <<hrA<<":"<<setfill('0')<<setw(2)<<min<<" "
            <<ampm<<endl;
}