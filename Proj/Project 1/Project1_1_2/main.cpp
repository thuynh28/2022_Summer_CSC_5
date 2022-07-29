/* 
 * File:   main.cpp
 * Author: Triet Huynh
 * Created on July 20th, 2022, 10:30 AM
 * Purpose: Project 1_Simple Hide and Seek game in a 9 slots board for 1 player
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <cmath>     //math library
#include <fstream>   //file stream
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int choice,     //player's guess
            hide;   //where the object is hiding
    char slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9; //slot on board
    char start;     //user choice to start or quit the game
    int rounds;      //3 rounds in total
    int attmps,   //number of attempts it took for user to find the right spot
            temp; //temporary value to hold number of attempts in each round
    float atmpSum,//total amount of tries in all 3 rounds
            atmpAvg;//average number of attempts it takes for player to succeed per round
    string plyer;      //player's name
    bool win;          //true if player guess correctly, false otherwise
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Would you like to play a simple hide and seek game?"<<endl;
        cout<<"Enter 'y' to start or 'n' to exit : ";
        cin>>start;
    if(start=='y'||start=='Y'){
        cout<<"             Game starts!  "<<endl<<endl;
        cout<<"Enter player's name: ";      
        cin>>plyer; //get player's name
        ofstream outputFile(plyer);
        atmpSum=0;
        for(rounds=0;rounds<3;rounds++){
            slot1='1';
            slot2='2';
            slot3='3';
            slot4='4';
            slot5='5';
            slot6='6';
            slot7='7';
            slot8='8';
            slot9='9';
            hide=(rand()%9)+1;
            win=0;
            attmps=0;
            temp=0;
            cout<<endl<<"          The rule is simple"<<endl;
            cout<<"Find out where I am hiding in the board below"<<endl
                <<"             And you win!                      "<<endl<<endl;
            //display table
            cout<<"\t     |     |     "<<endl;
            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
            cout<<"\t_____|_____|_____"<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
            cout<<"\t_____|_____|_____"<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
            cout<<"\t     |     |     "<<endl<<endl;
            
            cout<<"Round "<<rounds+1<<endl;
            do{
                cout<<"Where am I hiding [1-9] : ";
                cin>>choice;
                attmps++;
                switch (choice){
                    case 1:{
                        if(choice==hide)
                        {
                            win=1;
                            slot1='0';
                            //display updated table
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot1='X';
                            //display updated table
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                    }
                case 2:{
                    if(choice==hide)
                        {
                            win=1;
                            slot2='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot2='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                    }
                case 3:{
                    if(choice==hide)
                        {
                            win=1;
                            slot3='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot3='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 4:{
                    if(choice==hide)
                        {
                            win=1;
                            slot4='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot4='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 5:{
                    if(choice==hide)
                        {
                            win=1;  
                            slot5='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot5='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 6:{
                    if(choice==hide)
                        {
                            win=1;
                            slot6='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot6='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 7:{
                    if(choice==hide)
                        {
                            win=1;
                            slot7='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot7='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 8:{
                    if(choice==hide)
                        {
                            win=1;
                            slot8='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot8='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }
                case 9:{
                    if(choice==hide)
                        {
                            win=1;
                            slot9='0';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }else
                        {
                            slot9='X';
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
                            cout<<"\t_____|_____|_____"<<endl;
                            cout<<"\t     |     |     "<<endl;
                            cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
                            cout<<"\t     |     |     "<<endl<<endl;
                            break;
                        }
                }   
                }
            }while(choice!=hide);
            if(win==1){
            cout<<"Success!"<<endl;
            cout<<"It took you "<<attmps<<" attempts in round "<<rounds<<endl;
            }
            outputFile<<attmps<<endl;
        }
        outputFile.close();
        ifstream inputFile;
        inputFile.open(plyer);  //create a file with player's name and store attempts
        while(inputFile>>temp){
            atmpSum+=temp;
        }
        inputFile.close();
        atmpAvg=static_cast<float>(atmpSum)/3.0;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<plyer<<" take an average "<<atmpAvg<<" attempts to finish the game."<<endl<<endl;
    }else if(start=='n'||start=='N'){   //quits game
        cout<<"Exiting. See ya later!"<<endl<<endl;
    }else{                              //invalid input
        cout<<"Invalid choice! Please try again."<<endl<<endl;
    } 
    }while(start!='n'&&start!='N');
    //Exit stage right or left!
    return 0;
}

