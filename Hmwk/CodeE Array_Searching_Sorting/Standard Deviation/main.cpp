/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(7);
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}
//Function to get inputs into array
void  init(float test[],int size){
    for(int i=0;i<size;i++){
        cin>>test[i];
    }
}
//Function to calculate average of values in array
float avgX(float test[], int size){
    float avg;
    float sum=0.0f;
    for(int i=0;i<size;i++){
        sum+=test[i];
    }
    avg=sum/size;
    return avg;
}
//Function to calculate standard deviation
float stdX(float test[],int size){
    float avg,stdX;
    avg=avgX(test,size);
    stdX=0.0f;
    for(int i=0;i<size;i++){
        stdX+=pow(test[i]-avg,2)/(size-1);
    }
    stdX=pow(stdX,0.5);
    return stdX;
}