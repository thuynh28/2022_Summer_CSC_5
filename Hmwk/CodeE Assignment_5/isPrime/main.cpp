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
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;
    bool prime;
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>input;
    //Process/Map inputs to outputs
    prime=isPrime(input);
    //Output data
    if(prime)
        cout<<input<<" is prime.";
    else
        cout<<input<<" is not prime.";
    //Exit stage right!
    return 0;
}

//Define isPrime function
bool isPrime(int num){
    if(num==1||num==0)  //0 and 1 are not prime
        return false;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}