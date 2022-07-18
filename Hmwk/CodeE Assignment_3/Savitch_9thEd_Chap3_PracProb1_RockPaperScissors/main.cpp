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
    char ply1,//player 1 choice
            ply2;//player 2 choice
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>ply1>>ply2;
     
    //Map inputs -> outputs
    
    //Display the outputs
    if((ply1=='R'&&ply2=='P')||(ply1=='r'&&ply2=='p')||(ply1=='r'&&ply2=='P')||(ply1=='R'&&ply2=='p'))
        cout<<"Paper covers rock.";
    else if((ply1=='P'&&ply2=='R')||(ply1=='p'&&ply2=='r')||(ply1=='p'&&ply2=='R')||(ply1=='P'&&ply2=='r'))
        cout<<"Paper covers rock.";
    else if((ply1=='S'&&ply2=='R')||(ply1=='s'&&ply2=='r')||(ply1=='s'&&ply2=='R')||(ply1=='S'&&ply2=='r'))
        cout<<"Rock breaks scissors.";
    else if((ply1=='R'&&ply2=='S')||(ply1=='r'&&ply2=='s')||(ply1=='r'&&ply2=='S')||(ply1=='R'&&ply2=='s'))
        cout<<"Rock breaks scissors.";
    else if((ply1=='P'&&ply2=='S')||(ply1=='p'&&ply2=='s')||(ply1=='p'&&ply2=='S')||(ply1=='P'&&ply2=='s'))
        cout<<"Scissors cuts paper.";
    else if((ply1=='S'&&ply2=='P')||(ply1=='s'&&ply2=='p')||(ply1=='s'&&ply2=='P')||(ply1=='S'&&ply2=='p'))
        cout<<"Scissors cuts paper.";
    else
        cout<<"Nobody wins.";
    
    //Exit stage right or left!
    return 0;
}

