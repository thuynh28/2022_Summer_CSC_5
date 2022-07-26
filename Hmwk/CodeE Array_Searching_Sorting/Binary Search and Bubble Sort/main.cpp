/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
//Function to fill array's content
void fillAry(int array[],int size){
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
//Function to print out array content
void prntAry(int array[],int size,int col){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if((i+1)%10==0) cout<<endl;
    }
    cout<<endl;
}
//Function to perform bubble sort on array
void bublSrt(int array[],int size){
    int maxElmt;
    int indx;
    for(maxElmt=size-1;maxElmt>0;maxElmt--){
        for(indx=0;indx<maxElmt;indx++){
            if(array[indx]>array[indx+1]){
                int temp=array[indx];
                array[indx]=array[indx+1];
                array[indx+1]=temp;
            }
        }
    }
} 
//Function to perform binary search on array
bool binSrch(int array[],int size,int val,int& pos){
    int first=0;
    int last=size-1;
    int middle;
    pos=-1;
    bool found=false;
    while(!found&&first<=last){
        middle=(first+last)/2;
        if(array[middle]==val){
            pos=middle;
            found=true;
        }else if(array[middle]>val){
            last=middle-1;
        }else{
            first=middle+1;
        }
    }
}