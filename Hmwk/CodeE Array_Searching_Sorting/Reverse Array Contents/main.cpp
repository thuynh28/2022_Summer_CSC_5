/* 
 * File:   main.cpp
 * Author:
 * Created:
 * Purpose:  Reverse the Array
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

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}
//Function to get inputs and store in array
void  init(int num[],int size){
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
}
//Function to reverse array contents
void  revrse(int num[],int size){
    int temp[size];     //temporary array to hold original values
    for(int i=0;i<size;i++){
        temp[i]=num[i];
    }
    for(int i=0;i<size;i++){
        num[i]=temp[size-1-i];
    }
}
//Function to output array contents
void  print(int num[],int size,int col){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
        if((i+1)%10==0)cout<<endl;
    }
} 