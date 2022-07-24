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
    int count;      //current attempt
    float attmps,   //number of attempts it took for user to find the right spot
            rounds; //3 attempts in total
    string plyer;      //player's name
    bool win;          //true if player guess correctly, false otherwise
    
    //Initialize or input i.e. set variable values
    attmps=3;
    do{
    slot1='1';
    slot2='2';
    slot3='3';
    slot4='4';
    slot5='5';
    slot6='6';
    slot7='7';
    slot8='8';
    slot9='9';
    count=0;
    hide=(rand()%9)+1;      //generate a random slot as hiding spot
    win=0;
    cout<<"Would you like to play a simple hide and seek game?"<<endl;
    cout<<"Enter 'y' to start or 'n' to exit : ";
    cin>>start;
    //starts game
    if(start=='y'||start=='Y'){
        cout<<"             Game starts!  "<<endl;
        cout<<"          The rule is simple"<<endl;
        cout<<"Find out where I am hiding in the board below"<<endl
            <<"             And you win!                      "<<endl<<endl;
        cout<<"Enter player's name: ";
        cin>>plyer;
        cout<<plyer<<", You have "<<attmps<<" attempts in total."<<endl<<endl;
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
        do{
            cout<<"Where am I hiding [1-9] "<<endl
                    <<attmps-count<<" attempts left : ";    //user have 3 attempts in total
            cin>>choice;
            count++;
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
        }while(count<attmps&&choice!=hide);
        //Output result
        if(win==1)
            cout<<"Wow, congratulations! You've won."<<endl<<endl;
        else
            cout<<"Oops, you lost. Better luck next time~."<<endl<<endl;
    }else if(start=='n'||start=='N'){   //quits game
        cout<<"Exiting. See ya later!"<<endl<<endl;
    }else{                              //invalid input
        cout<<"Invalid choice! Please try again."<<endl<<endl;
    } 
    }while(start!='n'&&start!='N');
    //Exit stage right or left!
    return 0;
}

