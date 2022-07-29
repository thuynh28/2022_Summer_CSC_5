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
void dplTble(char &,char &,char &,char &,char &,char &,char &,char &,char &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int choice,         //player's guess
            hide,       //where the object is hiding
            attmps,     //number of attempts it took for user to find the right spot
            temp,       //temporary value to hold number of attempts in each round
            rounds;     //3 rounds in total
    char slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9; //slot on board
    char start;         //user choice to start or quit the game
    float atmpSum,      //total amount of tries in all 3 rounds
            atmpAvg;    //average number of attempts it takes for player to succeed per round
    string plyer1,      //player 1's name
            plyer2,     //player 2's name
            enemy;      //name player set for the program as enemy
    bool win;           //true if player guess correctly, false otherwise
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Would you like to play a simple hide and seek game?"<<endl;
        cout<<"Enter 'y' to start or 'n' to exit : ";
        cin>>start;
    if(start=='y'||start=='Y'){
        cout<<"             Game starts!  "<<endl<<endl;
        cout<<"Enter player's name: ";      
        cin>>plyer1; //get player's name
        ofstream outputFile(plyer1);
        atmpSum=0;
        //start game from round 1->0
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
            hide=(rand()%9)+1; //generate a random number as hiding slot
            win=0;
            attmps=0;
            temp=0;
            cout<<endl<<"          The rule is simple"<<endl;
            cout<<"Find out where I am hiding in the board below"<<endl
                <<"             And you win!                      "<<endl<<endl;
            //display table
            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
            cout<<"Round "<<rounds+1<<endl;
            do{
                cout<<"Where am I hiding [1-9] : ";
                cin>>choice;
                //input validation
                if(choice<1||choice>9)
                    cout<<"Invalid input. Please try again."<<endl;
                else{
                attmps++;
                switch (choice){
                    case 1:{
                        if(choice==hide)
                        {
                            win=1;
                            slot1='0';
                            //display updated table
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot1='X';
                            //display updated table
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                    }
                case 2:{
                    if(choice==hide)
                        {
                            win=1;
                            slot2='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot2='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                    }
                case 3:{
                    if(choice==hide)
                        {
                            win=1;
                            slot3='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot3='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 4:{
                    if(choice==hide)
                        {
                            win=1;
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot4='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 5:{
                    if(choice==hide)
                        {
                            win=1;  
                            slot5='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot5='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 6:{
                    if(choice==hide)
                        {
                            win=1;
                            slot6='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot6='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 7:{
                    if(choice==hide)
                        {
                            win=1;
                            slot7='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot7='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 8:{
                    if(choice==hide)
                        {
                            win=1;
                            slot8='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot8='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }
                case 9:{
                    if(choice==hide)
                        {
                            win=1;
                            slot9='0';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }else
                        {
                            slot9='X';
                            dplTble(slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9);
                            break;
                        }
                }   
                }
                }
            }while(choice!=hide);
            if(win==1){
            cout<<"Success!"<<endl;
            cout<<"It took you "<<attmps<<" attempts in round "<<rounds+1<<endl;
            }
            outputFile<<attmps<<endl;
        }
        outputFile.close();
        ifstream inputFile;
        inputFile.open(plyer1);  //create a file with player's name and store attempts
        while(inputFile>>temp){
            atmpSum+=temp;
        }
        inputFile.close();
        atmpAvg=static_cast<float>(atmpSum)/3.0;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<plyer1<<" take an average "<<atmpAvg<<" attempts to finish the game."<<endl<<endl;
    }else if(start=='n'||start=='N'){   //quits game
        cout<<"Exiting. See ya later!"<<endl<<endl;
    }else{                              //invalid input
        cout<<"Invalid choice! Please try again."<<endl<<endl;
    } 
    }while(start!='n'&&start!='N');
    //Exit stage right or left!
    return 0;
}
//Function to display game table
void dplTble(char &slot1,char &slot2,char &slot3,char &slot4,char &slot5,char &slot6,char &slot7,char &slot8,char &slot9){
    cout<<"\t     |     |     "<<endl;
    cout<<"\t  "<<slot1<<"  |  "<<slot2<<"  |  "<<slot3<<"  "<<endl;
    cout<<"\t_____|_____|_____"<<endl;
    cout<<"\t     |     |     "<<endl;
    cout<<"\t  "<<slot4<<"  |  "<<slot5<<"  |  "<<slot6<<"  "<<endl;
    cout<<"\t_____|_____|_____"<<endl;
    cout<<"\t     |     |     "<<endl;
    cout<<"\t  "<<slot7<<"  |  "<<slot8<<"  |  "<<slot9<<"  "<<endl;
    cout<<"\t     |     |     "<<endl<<endl;
}