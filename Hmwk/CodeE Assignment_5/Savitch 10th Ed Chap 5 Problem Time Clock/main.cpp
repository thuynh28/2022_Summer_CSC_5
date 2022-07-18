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
void getUsrInp(int&,int&,char&,int&);
void repeat(char&);
void timeCalc(int,int,int,int&,int&,char,string&,string&);
void rsltOutput(int,int,int,int,string,string);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int bfreHr,         //hour before waiting
            bfreMin,    //minute before waiting
            aftrHr,     //hour after waiting
            aftrMin,    //minute before waiting
            wait;       //wait time in minutes
    char ampm,      //AM or PM before
            again;      //run again or not
    string timeBfre,    //AM or PM before
            timeAftr;   //AM or PM after
            
    //Declare Variables
    do{
        getUsrInp(bfreHr,bfreMin,ampm,wait);
        timeCalc(bfreHr,bfreMin,wait,aftrHr,aftrMin,ampm,timeBfre,timeAftr);
        rsltOutput(bfreHr,bfreMin,aftrHr,aftrMin,timeBfre,timeAftr);
        repeat(again);
    }while(again!='n'&&again!='N');
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

void getUsrInp(int& bfreHr,int& bfreMin,char& ampm,int& wait){
    cout<<"Enter hour:"<<endl<<endl;
        cin>>bfreHr;
        cout<<"Enter minutes:"<<endl<<endl;
        cin>>bfreMin;
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        cin>>ampm;
        cout<<"Enter waiting time:"<<endl<<endl;
        cin>>wait;
}

void repeat(char& again){
    cout<<"Again:"<<endl;
    cin>>again;
    if(again!='n'&&again!='N')
        cout<<endl;
}

void timeCalc(int bfreHr,int bfreMin,int wait,int& aftrHr,int& aftrMin,char ampm,string& timeBfre,string& timeAftr){
    aftrMin=bfreMin+wait;
        aftrHr=bfreHr;
        while(aftrMin>=60){
        aftrMin=aftrMin-60;
        aftrHr++;
    }
    if(ampm=='a'||ampm=='A'){
        timeBfre="AM";
        if(aftrHr==12){
            timeAftr="PM";
        }else if(aftrHr>12){
            timeAftr="PM";
            aftrHr=aftrHr-12;
        }else{
            timeAftr="AM";
        }
    }
    if(ampm=='p'||ampm=='P'){
        timeBfre="PM";
        if(aftrHr>=12){
            timeAftr="AM";
            aftrHr-=12;
        }else{
            timeAftr="PM";
        }
    }
}

void rsltOutput(int bfreHr,int bfreMin,int aftrHr,int aftrMin,string timeBfre,string timeAftr){
    cout<<"Current time = "<<setfill('0')<<setw(2)<<bfreHr
            <<":"<<setfill('0')<<setw(2)<<bfreMin
            <<" "<<timeBfre<<endl;
    cout<<"Time after waiting period = "<<setfill('0')<<setw(2)<<aftrHr
            <<":"<<setfill('0')<<setw(2)<<aftrMin
            <<" "<<timeAftr<<endl<<endl;
}