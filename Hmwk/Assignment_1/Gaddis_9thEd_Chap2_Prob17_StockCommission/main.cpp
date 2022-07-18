/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 23, 2022, 10:50 PM
 * Purpose: Stock Commission Problem_Commission paid and total paid
 */

//System Libraries
#include <iostream>
using namespace std;
const int PERCENT=100;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short nShare;//number of shares Kathryn bought
    float prPerShare,//price of each share in $
            pctCommn;//commission percentage
    
    //Initialize Variables
    nShare=750; //Kathryn bought 750 shares of stock
    prPerShare=35; //each share is $35
    pctCommn=2; //2% commission is paid to stock broker
    
    //Map inputs to outputs -> The Process
    float stckPaid=nShare*prPerShare; //total amount paid for stocks without commission in $
    float commnPaid=stckPaid*pctCommn/PERCENT; //amount of commission paid in $
    float totlPaid=stckPaid+commnPaid; //total amount paid for stocks with commission
    
    //Display Results
    cout<<"Amount paid for stock alone: $"<<stckPaid<<endl;
    cout<<"Amount paid for commission: $"<<commnPaid<<endl;
    cout<<"Amount paid in total including commission: $"<<totlPaid<<endl;
    
    //Exit stage right
    return 0;
}

