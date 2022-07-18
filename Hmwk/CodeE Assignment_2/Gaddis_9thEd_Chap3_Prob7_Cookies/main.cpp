/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 12:30 PM
 * Purpose: Counting Calories from Cookies consumed
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short nCks,//total number of cookies in bag
            nCsmed,//number of cookies consumed
            nServ,//number of servings per bag
            calPerServ,//calories per serving
            calTtl,//calories total per bag
            calPerCk,//calories per cookie
            calCsmed;//calories consumed
    
    //Initialize or input i.e. set variable values
    nCks=40;//40 cookies in one bag
    nServ=10;//10 servings per bag
    calPerServ=300;//300 calories per serving
    
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>nCsmed;//map user input to var
    
    //Map inputs -> outputs
    calTtl=nServ*calPerServ;
    calPerCk=calTtl/nCks;
    calCsmed=calPerCk*nCsmed;
    
    //Display the outputs
    cout<<"You consumed "<<calCsmed<<" calories.";
            
    //Exit stage right or left!
    return 0;
}

