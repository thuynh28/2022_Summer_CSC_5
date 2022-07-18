/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2022, 3:18 PM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                cout<<"Place Problem 0 here"<<endl;
                //Declare Variables
                string name1, //declare variables to hold name inputs
                name2,
                name3;
                //Initialize or input i.e. set variable values
                cout<<"Sorting Names"<<endl;
                cout<<"Input 3 names"<<endl;
                cin>>name1>>name2>>name3;
                //Map inputs -> outputs
                //Display the outputs
                if(name1<name2&&name2<name3)   //name1<name2<name3 in alphabetical order
                    cout<<name1<<endl<<name2<<endl<<name3;
                if(name1<name3&&name3<name2)    //name1<name3<name2 in alphabetical order
                    cout<<name1<<endl<<name3<<endl<<name1;
                if(name2<name3&&name3<name1)    //name2<name3<name1 in alphabetical order
                    cout<<name2<<endl<<name3<<endl<<name1;
                if(name2<name1&&name1<name3)    //name2<name1<name3 in alphabetical order
                    cout<<name2<<endl<<name1<<endl<<name3;
                if(name3<name1&&name1<name2)    //name3<name1<name2 in alphabetical order
                    cout<<name3<<endl<<name1<<endl<<name2;
                if(name3<name2&&name2<name1)    //name3<name2<name1 in alphabetical order
                    cout<<name3<<endl<<name2<<endl<<name1;
                break;
            }
            
            case 1:{
                cout<<"Place Problem 1 here"<<endl;
                //Declare Variables
                short bks, //number of books purchased
                        pts; //number of points earned
                //Initialize or input i.e. set variable values
                cout<<"Book Worm Points"<<endl;
                cout<<"Input the number of books purchased this month."<<endl;
                cin>>bks;
                //Map inputs -> outputs
                switch(bks){
                    case 0: //if purchase 0 book, earn 0 points
                        pts=0;
                        break;
                    case 1: //if purchase 1 book, earn 5 points
                        pts=5;
                        break;
                    case 2: //if purchase 2 books, earn 15 points
                        pts=15;
                        break;
                    case 3: //if purchase 3 books, earn 30 points
                        pts=30;
                        break;
                    default: //earn 60 points if purchase more than 3
                        pts=60;
                        break;
                }                
                //Display the outputs
                cout<<"Books purchased ="<<setw(3)<<bks<<endl;
                cout<<"Points earned   ="<<setw(3)<<pts;
                break;
            }
            
            case 2:{
                cout<<"Place Problem 2 here"<<endl;
                const float LOW_BLCE=400.0;//extra fee will be applied for accounts with under $400 balance
                float mFee,//monthly fee in $
                        cFee,//check fee in $
                        xFee,//extra low balance fee in $
                        ttlFee,//total fee charged in $
                        blce,//beginning balance in $
                        newBlce;//new balance after fees in $
                short nChecks;//number of checks written
                //Initialize or input i.e. set variable values in $
                mFee=10.0;
                cout<<"Monthly Bank Fees"<<endl;
                cout<<"Input Current Bank Balance and Number of Checks"<<endl;
                cin>>blce>>nChecks;
                if(nChecks<0) //program exits if number of checks is negative
                    return 0;
                else
                {
                    if(blce<0) //display a warning message if balance is less than 0
                        cout<<"Warning: Account is Overdrawn"<<endl;
                    if(blce<LOW_BLCE) //extra $15 is charged for balance less than $400
                        xFee=15.0;
                    else //no extra charge otherwise
                        xFee=0.0;
                    if(nChecks<20)//calculating check fees based on number of checks written
                        cFee=nChecks*.10;
                    if(nChecks>=20&&nChecks<40)
                        cFee=nChecks*.08;
                    if(nChecks>=40&&nChecks<60)
                        cFee=nChecks*.06;
                    if(nChecks>=60)
                        cFee=nChecks*.04;
                //Map Inputs to Outputs    
                    ttlFee=xFee+mFee+cFee;
                    newBlce=blce-ttlFee;
                //Display the outputs
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"Balance     $"<<setw(9)<<blce<<endl;
                    cout<<"Check Fee   $"<<setw(9)<<cFee<<endl;
                    cout<<"Monthly Fee $"<<setw(9)<<mFee<<endl;
                    cout<<"Low Balance $"<<setw(9)<<xFee<<endl;
                    cout<<"New Balance $"<<setw(9)<<newBlce;
                }
                break;
            }
            
            case 3:{
                cout<<"Place Problem 3 here"<<endl;
                string name1,//name of 1st runner
                        name2,//name of 2nd runner
                        name3;//name of 3rd runner
                unsigned short time1,//first runner's time
                        time2,//second runner's time
                        time3;//third runner's time
                //Initialize or input i.e. set variable values
                cout<<"Race Ranking Program"<<endl;
                cout<<"Input 3 Runners"<<endl;
                cout<<"Their names, then their times"<<endl;
                cin>>name1>>time1>>name2>>time2>>name3>>time3;
                //Map inputs -> outputs
                //Display the outputs
                if(time1<0||time2<0||time3<0)//program exits if any of the time inputs is negative
                    return 0;
                else{
                    if(time1<time2&&time2<time3){
                        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                        cout<<name3<<"\t"<<setw(3)<<time3;
                    }
                    if(time1<time3&&time3<time2){
                        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                        cout<<name2<<"\t"<<setw(3)<<time2;
                    }
                    if(time2<time3&&time3<time1){
                        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                        cout<<name1<<"\t"<<setw(3)<<time1;
                    }
                    if(time2<time1&&time1<time3){
                        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                        cout<<name3<<"\t"<<setw(3)<<time3;
                    }
                    if(time3<time1&&time1<time2){
                        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                        cout<<name2<<"\t"<<setw(3)<<time2;
                    }
                    if(time3<time2&&time2<time1){
                        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                        cout<<name1<<"\t"<<setw(3)<<time1;
                    }
                }
                break;
            }
            
            case 4:{
                cout<<"Place Problem 4 here"<<endl;
                //Declare Variables
                short hours;//customer's hours of usage
                short hourA,//hours of access for plan A and plan B. Plan C is unlimited
                        hourB;
                float rateA,//rate for each plan in $
                        rateB,
                        rateC;
                float extA,//extra rate for plan A & B after hours of access is reached in $
                        extB;
                char plan;//customer's plan
                float bill;//customer's bill in $
                //Initialize or input i.e. set variable values
                hourA=10;
                hourB=20;
                rateA=9.95;
                rateB=14.95;
                rateC=19.95;
                extA=2.0;
                extB=1.0;
                cout<<"ISP Bill"<<endl;
                cout<<"Input Package and Hours"<<endl;
                cin>>plan>>hours;
                //Map inputs -> outputs
                if(hours>744)//input validation: hours cannot exceed 744
                    return 0;
                else{
                    if(plan=='A'){  //if customer chooses plab A
                        bill=(hours>hourA)?(hours-hourA)*extA+rateA:rateA;
                    }
                    if(plan=='B'){  //if customer chooses plab B
                        bill=(hours>hourB)?(hours-hourB)*extB+rateB:rateB;
                    }
                    if(plan=='C'){  //if customer choose plan C
                        bill=rateC;
                    }
                }
                //Display the outputs
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Bill = $"<<setw(6)<<bill;
                break;
            }
            
            case 5:{
                cout<<"Place Problem 5 here"<<endl;
                //Declare Variables
                char ply1,//player 1 choice
                        ply2;//player 2 choice
                //Initialize or input i.e. set variable values
                cout<<"Rock Paper Scissors Game"<<endl;
                cout<<"Input Player 1 and Player 2 Choices"<<endl;
                cin>>ply1>>ply2;
                //Map inputs -> outputs
                //Display the outputs
                if((ply1=='R'&&ply2=='P')||(ply1=='r'&&ply2=='p')||(ply1=='r'&&ply2=='P')||(ply1=='R'&&ply2=='p'))
                    cout<<"Paper covers rock.";
                else if((ply1=='P'&&ply2=='R')||(ply1=='p'&&ply2=='r')||(ply1=='p'&&ply2=='R')||(ply1=='P'&&ply2=='r'))
                    cout<<"Paper covers rock.";
                else if((ply1=='S'&&ply2=='R')||(ply1=='s'&&ply2=='r')||(ply1=='s'&&ply2=='R')||(ply1=='S'&&ply2=='r'))
                    cout<<"Rock breaks scissors.";
                else if((ply1=='R'&&ply2=='S')||(ply1=='r'&&ply2=='s')||(ply1=='r'&&ply2=='S')||(ply1=='R'&&ply2=='s'))
                    cout<<"Rock breaks scissors.";
                else if((ply1=='P'&&ply2=='S')||(ply1=='p'&&ply2=='s')||(ply1=='p'&&ply2=='S')||(ply1=='P'&&ply2=='s'))
                    cout<<"Scissors cuts paper.";
                else if((ply1=='S'&&ply2=='P')||(ply1=='s'&&ply2=='p')||(ply1=='s'&&ply2=='P')||(ply1=='S'&&ply2=='p'))
                    cout<<"Scissors cuts paper.";
                else
                    cout<<"Nobody wins.";
                            break;
            }
            
            case 6:{
                cout<<"Place Problem 6 here"<<endl;
                //Declare Variables
                short arabic;//year in Arabic
                string roman;//year in Roman
                short n1000,
                        n100,
                        n10,
                        n1;
                //Initialize or input i.e. set variable values
                cout<<"Arabic to Roman numeral conversion."<<endl;
                cout<<"Input the integer to convert."<<endl;
                cin>>arabic;
                //Map inputs -> outputs
                if(arabic<1000||arabic>3000){   //year has to be between 1000 and 3000
                    cout<<arabic<<" is Out of Range!";
                    exit (1);
                }
                else{
                    n1000=(arabic/1000)%10;
                    n100=(arabic/100)%10;
                    n10=(arabic/10)%10;
                    n1=(arabic/1)%10;
                    //Convert 1000s from Arabic to Roman Numerals
                    roman+=(n1000==1)?"M":
                            (n1000==2)?"MM":
                            (n1000==3)?"MMM":"";
                    //Convert 100s from Arabic to Roman Numerals
                    roman+=(n100==1)?"C":
                            (n100==2)?"CC":
                            (n100==3)?"CCC":
                            (n100==4)?"CD":
                            (n100==5)?"D":
                            (n100==6)?"DC":
                            (n100==7)?"DCC":
                            (n100==8)?"DCCC":
                            (n100==9)?"CM":"";
                    //Convert 10s from Arabic to Roman Numerals
                    roman+=(n10==1)?"X":
                            (n10==2)?"XX":
                            (n10==3)?"XXX":
                            (n10==4)?"XL":
                            (n10==5)?"L":
                            (n10==6)?"LX":
                            (n10==7)?"LXX":
                            (n10==8)?"LXXX":
                            (n10==9)?"XC":"";
                    //Convert 1s from Arabic to Roman Numerals
                    roman+=(n1==1)?"I":
                            (n1==2)?"II":
                            (n1==3)?"III":
                            (n1==4)?"IV":
                            (n1==5)?"V":
                            (n1==6)?"VI":
                            (n1==7)?"VII":
                            (n1==8)?"VIII":
                            (n1==9)?"IX":"";
                }
                //Display the outputs
                cout<<arabic<<" is equal to "<<roman;
                break;
            }
            
            case 7:{
                cout<<"Place Problem 7 here"<<endl;
                //Declare Variables
                string sign1,//user input 2 signs
                        sign2;
                string elmt1,//element of first sign 
                        elmt2;//element of second sign
                //Initialize or input i.e. set variable values
                cout<<"Horoscope Program which examines compatible signs."<<endl;
                cout<<"Input 2 signs."<<endl;
                cin>>sign1>>sign2;
                //Map inputs -> outputs
                if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius")
                    elmt1="Fire";
                if(sign1=="Taurus"||sign1=="Virgo"||sign1=="Capricorn")
                    elmt1="Earth";
                if(sign1=="Gemini"||sign1=="Libra"||sign1=="Aquarius")
                    elmt1="Air";
                if(sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces")
                    elmt1="Water";
                if(sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius")
                    elmt2="Fire";
                if(sign2=="Taurus"||sign2=="Virgo"||sign2=="Capricorn")
                    elmt2="Earth";
                if(sign2=="Gemini"||sign2=="Libra"||sign2=="Aquarius")
                    elmt2="Air";
                if(sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces")
                    elmt2="Water";
                //Display Output
                if(elmt1==elmt2)
                    cout<<sign1<<" and "<<sign2<<" are compatible "<<elmt1<<" signs.";
                else
                    cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                break;
            }
            
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}