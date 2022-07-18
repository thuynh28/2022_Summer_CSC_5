/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 6, 2022, 7:35 PM
 * Purpose: Arabic to Roman Conversion
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
    short arabic;//year in Arabic
    string roman;//year in Roman
    short n1000,
            n100,
            n10,
            n1;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    
    //Map inputs -> outputs
    if(arabic<1000||arabic>3000){   //year has to be between 1000 and 3000
        cout<<arabic<<" is Out of Range!";
        exit (1);
    }
    else{
        n1000=(arabic/1000)%10;
        n100=(arabic/100)%10;
        n10=(arabic/10)%10;
        n1=(arabic/1)%10;
        //Convert 1000s from Arabic to Roman Numerals
        roman+=(n1000==1)?"M":
                (n1000==2)?"MM":
                (n1000==3)?"MMM":"";
        //Convert 100s from Arabic to Roman Numerals
        roman+=(n100==1)?"C":
                (n100==2)?"CC":
                (n100==3)?"CCC":
                (n100==4)?"CD":
                (n100==5)?"D":
                (n100==6)?"DC":
                (n100==7)?"DCC":
                (n100==8)?"DCCC":
                (n100==9)?"CM":"";
        //Convert 10s from Arabic to Roman Numerals
        roman+=(n10==1)?"X":
                (n10==2)?"XX":
                (n10==3)?"XXX":
                (n10==4)?"XL":
                (n10==5)?"L":
                (n10==6)?"LX":
                (n10==7)?"LXX":
                (n10==8)?"LXXX":
                (n10==9)?"XC":"";
        //Convert 1s from Arabic to Roman Numerals
        roman+=(n1==1)?"I":
                (n1==2)?"II":
                (n1==3)?"III":
                (n1==4)?"IV":
                (n1==5)?"V":
                (n1==6)?"VI":
                (n1==7)?"VII":
                (n1==8)?"VIII":
                (n1==9)?"IX":"";
    }
    
    //Display the outputs
    cout<<arabic<<" is equal to "<<roman;
    
    //Exit stage right or left!
    return 0;
}

