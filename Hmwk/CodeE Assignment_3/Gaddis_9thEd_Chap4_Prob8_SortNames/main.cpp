/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: 
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
    string name1, //declare variables to hold name inputs
            name2,
            name3;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    
    //Display the outputs
     if(name1<name2&&name2<name3)   //name1<name2<name3 in alphabetical order
        cout<<name1<<endl<<name2<<endl<<name3;
    if(name1<name3&&name3<name2)    //name1<name3<name2 in alphabetical order
        cout<<name1<<endl<<name3<<endl<<name1;
    if(name2<name3&&name3<name1)    //name2<name3<name1 in alphabetical order
        cout<<name2<<endl<<name3<<endl<<name1;
    if(name2<name1&&name1<name3)    //name2<name1<name3 in alphabetical order
        cout<<name2<<endl<<name1<<endl<<name3;
    if(name3<name1&&name1<name2)    //name3<name1<name2 in alphabetical order
        cout<<name3<<endl<<name1<<endl<<name2;
    if(name3<name2&&name2<name1)    //name3<name2<name1 in alphabetical order
        cout<<name3<<endl<<name2<<endl<<name1;
    
    //Exit stage right or left!
    return 0;
}

