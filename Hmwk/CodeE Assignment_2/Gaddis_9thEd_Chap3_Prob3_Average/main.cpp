/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on June 30, 2022, 12:15 PM
 * Purpose: Calculating Average of 5 Numbers problem
 */

//System Libraries
#include <iostream>//Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float score1,//first test score
                    score2,//second test score
                    score3,//third test score
                    score4,//fourth test score
                    score5,//fifth test score
                    nScores,//number of test scores
                    scoreAvg;//average of the 5 test scores
                    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>score1>>score2>>score3>>score4>>score5;
    nScores=5;//there are 5 test scores
    
    //Map inputs -> outputs
    scoreAvg=(score1+score2+score3+score4+score5)/nScores;
    
    
    //Display the outputs
    cout<<"The average = "<<fixed<<showpoint<<setprecision(1)<<scoreAvg;
    
    //Exit stage right or left!
    return 0;
}

