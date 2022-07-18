/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 7:30 PM
 * Purpose: Diet Coke Consumption Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float WGHTGR=45359.2;//100lbs=45359gram

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float arswPct=0.001f;//percentage artificial sweetener in diet soda
    float mMse,//mass of the mouse in grams
            mPrsLbs,//desired weight of the person after dieting in pounds
            mPrsGrs,//desired weight of the person after dieting in grams
            mSoda,//weight of a can of soda in grams
            asSoda,//amount of artificial sweetener per can of soda in grams 
            asMse,//amount of artificial sweetener needed to kill a mouse in grams
            asPrs,//amount of artificial sweetener needed to kill a person in grams
            p2mRto;//person to mouse ratio in term of mass
    unsigned short nCans;//number of cans of soda consumed before lethal to person
    //Initialize or input i.e. set variable values
    mMse=35;
    asMse=5;
    mSoda=350;
    
    //Map inputs -> outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>mPrsLbs;//asks user to input desired weight in lbs and store in value
    mPrsGrs=mPrsLbs/100*WGHTGR;//converting from lbs to grams
    asSoda=mSoda*arswPct;
    p2mRto=mPrsGrs/mMse;
    asPrs=asMse*p2mRto;//lethal dose for the mouse is proportional to lethal dose for human
    nCans=asPrs/asSoda;
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl
            <<"which can be consumed is "<<nCans<<" cans";
    
    //Exit stage right or left!
    return 0;
}

