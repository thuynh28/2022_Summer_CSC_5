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
    string name1,//name of 1st runner
            name2,//name of 2nd runner
            name3;//name of 3rd runner
    unsigned short time1,//first runner's time
            time2,//second runner's time
            time3;//third runner's time
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(time1<0||time2<0||time3<0)//program exits if any of the time inputs is negative
        return 0;
    else{
        if(time1<time2&&time2<time3){
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2<<endl;
            cout<<name3<<"\t"<<setw(3)<<time3;
        }
        if(time1<time3&&time3<time2){
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2;
        }
        if(time2<time3&&time3<time1){
            cout<<name2<<"\t"<<setw(3)<<time2<<endl;
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name1<<"\t"<<setw(3)<<time1;
        }
        if(time2<time1&&time1<time3){
            cout<<name2<<"\t"<<setw(3)<<time2<<endl;
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name3<<"\t"<<setw(3)<<time3;
        }
        if(time3<time1&&time1<time2){
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2;
        }
        if(time3<time2&&time2<time1){
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            cout<<name2<<"\t"<<setw(3)<<time2<<endl;
            cout<<name1<<"\t"<<setw(3)<<time1;
        }
    }
}

