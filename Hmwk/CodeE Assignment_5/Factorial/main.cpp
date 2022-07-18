/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input,      //user input
            fact;   //factorial of user input
    //Initialize Variables
    cout<<"This program calculates the factorial"
            " using a function prototype"
            " found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>input;
    //Process/Map inputs to outputs
    fact=fctrl(input);  //function call
    //Output data
    cout<<input<<"! = "<<fact;
    //Exit stage right!
    return 0;
}

//Define factorial function
int fctrl(int num){
    int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    return fact;
}