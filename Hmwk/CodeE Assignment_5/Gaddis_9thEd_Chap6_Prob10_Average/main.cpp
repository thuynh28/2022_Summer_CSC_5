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
void getScre(int &,int &,int &,int &,int &);
int fndLwst(int,int,int,int,int);
float calcAvg(int,int,int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num1,       //first number input
            num2,   //second number input
            num3,   //third number input
            num4,   //fourth number input
            num5;   //fifth number input
    float avg;      //average of the inputs except the lowest
    //Initialize or input i.e. set variable values
    cout<<"Find the Average of Test Scores"<<endl
            <<"by removing the lowest value."<<endl;
    getScre(num1,num2,num3,num4,num5);
    //Map inputs -> outputs
    if(num1<1||num1>100||num2<1||num2>100||num3<1||num3>100||num4<1||num4>100||num4<1||num4>100){
        return 0;
    }else{
        avg=calcAvg(num1,num2,num3,num4,num5);
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"The average test score = "<<avg;
    }
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}
//function to get 5 number inputs from user
void getScre(int & num1,int & num2,int & num3,int & num4,int & num5){
    cout<<"Input the 5 test scores."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
}
//function to find the lowest of 5 input
int fndLwst(int num1,int num2,int num3,int num4,int num5){
    int lwst;
    lwst=num1;
    if(num2<lwst)
        lwst=num2;
    if(num3<lwst)
        lwst=num3;
    if(num4<lwst)
        lwst=num4;
    if(num5<lwst)
        lwst=num5;
    return lwst;
}
//finding the average of inputs except the lowest one
float calcAvg(int num1,int num2,int num3,int num4,int num5){
    float avg;
    int lwst=fndLwst(num1,num2,num3,num4,num5);
    avg=(lwst==num1)?(num2+num3+num4+num5)/4.0:
        (lwst==num2)?(num1+num3+num4+num5)/4.0:
            (lwst==num3)?(num1+num2+num4+num5)/4.0:
                (lwst==num4)?(num2+num3+num1+num5)/4.0:
                    (num1+num2+num3+num4)/4.0;
    return avg;          
}