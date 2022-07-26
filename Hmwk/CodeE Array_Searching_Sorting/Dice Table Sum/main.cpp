/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int table[][COLS],int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=COLS;j++){
            table[i][j]=i+j;
        }
    }
}

void prntTbl(const int table[][COLS],int rows){
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=1;i<=rows;i++){
        if(i==1)cout<<"   1 |";
        if(i==2)cout<<"R  2 |";
        if(i==3)cout<<"O  3 |";
        if(i==4)cout<<"W  4 |";
        if(i==5)cout<<"S  5 |";
        if(i==6)cout<<"   6 |";
        for(int j=1;j<=COLS;j++){
            cout<<setw(4)<<table[i][j];
        }
        cout<<endl;
    }
}