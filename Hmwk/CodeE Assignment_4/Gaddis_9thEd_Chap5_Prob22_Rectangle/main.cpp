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
    const unsigned short MAX_LENGTH=15,
            MIN_LENGTH=0;
    unsigned short length;
    char letter;
    
    //Initialize or input i.e. set variable values
    cin>>length>>letter;
    
    //Map inputs -> outputs
    if(length<MIN_LENGTH||length>MAX_LENGTH)
        exit (1);
    else{
        for(int i=0;i<length-1;i++){ //output all lines except last line
            for(int y=0;y<length;y++){
                cout<<letter;
            }
            cout<<endl;
        }
        for(int y=0;y<length;y++) //output last line without end line
                cout<<letter;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

