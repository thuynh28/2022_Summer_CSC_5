/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 6, 2022, 8:10 PM
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
    string sign1,//user input 2 signs
            sign2;
    string elmt1,//element of first sign 
            elmt2;//element of second sign
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    //Map inputs -> outputs
    if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius")
        elmt1="Fire";
    if(sign1=="Taurus"||sign1=="Virgo"||sign1=="Capricorn")
        elmt1="Earth";
    if(sign1=="Gemini"||sign1=="Libra"||sign1=="Aquarius")
        elmt1="Air";
    if(sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces")
        elmt1="Water";
    
    if(sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius")
        elmt2="Fire";
    if(sign2=="Taurus"||sign2=="Virgo"||sign2=="Capricorn")
        elmt2="Earth";
    if(sign2=="Gemini"||sign2=="Libra"||sign2=="Aquarius")
        elmt2="Air";
    if(sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces")
        elmt2="Water";
    
    if(elmt1==elmt2)
        cout<<sign1<<" and "<<sign2<<" are compatible "<<elmt1<<" signs.";
    else
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

