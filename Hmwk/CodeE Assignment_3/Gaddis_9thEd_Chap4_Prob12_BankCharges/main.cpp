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
    const float LOW_BLCE=400.0;//extra fee will be applied for accounts with under $400 balance
    float mFee,//monthly fee in $
            cFee,//check fee in $
            xFee,//extra low balance fee in $
            ttlFee,//total fee charged in $
            blce,//beginning balance in $
            newBlce;//new balance after fees in $
    short nChecks;//number of checks written
    
    //Initialize or input i.e. set variable values in $
    mFee=10.0;
    
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>blce>>nChecks;
    
    if(nChecks<0) //program exits if number of checks is negative
        return 0;
    else
    {
        if(blce<0) //display a warning message if balance is less than 0
            cout<<"Warning: Account is Overdrawn"<<endl;
        
        if(blce<LOW_BLCE) //extra $15 is charged for balance less than $400
            xFee=15.0;
        else //no extra charge otherwise
            xFee=0.0;
        
        if(nChecks<20)//calculating check fees based on number of checks written
            cFee=nChecks*.10;
        if(nChecks>=20&&nChecks<40)
            cFee=nChecks*.08;
        if(nChecks>=40&&nChecks<60)
            cFee=nChecks*.06;
        if(nChecks>=60)
            cFee=nChecks*.04;
    
    //Map Inputs to Outputs    
        ttlFee=xFee+mFee+cFee;//calculating total fees and new balance after subtracting the fees
        newBlce=blce-ttlFee;
        
    //Display the outputs
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Balance     $"<<setw(9)<<blce<<endl;
        cout<<"Check Fee   $"<<setw(9)<<cFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<mFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<xFee<<endl;
        cout<<"New Balance $"<<setw(9)<<newBlce;
    }

    //Exit stage right or left!
    return 0;
}

