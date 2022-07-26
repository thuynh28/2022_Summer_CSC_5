#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int compare(const string &,const string &,string &);

int main()
{
//Declare Variables
string key,answers,score;
char fileKey[]="key.dat",fileAns[]="answer.dat";
float pRight;

//Initialize or input i.e. set variable values
read(fileKey,key);
read(fileAns,answers);

//Score the exam
pRight=compare(key,answers,score);

//Display the outputs
cout<<endl<<"C/W ";print(score);
cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;

//Exit stage right or left!
return 0;
}
//Function to read from file
void read(const char fleNme[],string & inputs){
    ifstream inputFile;
    inputFile.open(fleNme);
    string temp;//temporary var to hold input from file
    inputs="";
    while(inputFile>>temp){
        inputs+=temp;
    }
    inputFile.close();
}
//Function to print out string
void print(const string &input){
    for(int i=0;i<input.size();i++){
        cout<<input[i];
        cout<<" ";
    }
    cout<<endl;
}
//Function to compare inputs and return right percentage
int compare(const string &inputA,const string &inputB,string &inputC){
    int pRight=0;
    inputC="";
    for(int i=0;i<inputA.size();i++){
        if(inputA[i]==inputB[i]){
            inputC+="C";
            pRight++;
        }else{
            inputC+="W";
        }
    }
    return pRight;
}