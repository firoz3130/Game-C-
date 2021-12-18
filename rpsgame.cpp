#include<iostream>
#include<cmath>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#include<string.h>
using namespace std;
int game(char you,char computer)
{
    if(you==computer)
      return -1;
    switch(you)
    {
        case 's': if(computer=='p')
                       return 0;
                  else if(computer=='z')
                       return 1;
                  else{
                       cout<<"PROBLEM OCCURS!!!!";
                       }
        case 'p':if(computer=='s')
                       return 1;
                  else if(computer=='z')
                       return 0;
                  else{
                       cout<<"PROBLEM OCCURS!!!!";
                       }
        case 'z':if(computer=='p')
                       return 1;
                  else if(computer=='s')
                       return 0;
                  else{
                       cout<<"PROBLEM OCCURS!!!!";
                       }
        default: {
                 cout<<" WRONG CHOICE!!!";
                 }
    }
}
int main()
{
    start:
    srand(time(NULL));                  //creates a random number each time
    int n,res;
    char you,computer,ch;
    string str;
    n=rand()%50;                        //random number is generated upto 50 
    if(n<=16)
       computer='s';
    else if(n>16&&n<=32)
       computer='p';
    else
       computer='z';
cout<<"ENTER A CHOICE:\n(CLICK ONE OF GIVEN\ts=STONE\tp=PAPER\tz=SCISSOR)\n=> ";
cin>>you;
you=tolower(you);
cout<<"YOU ENTERED: ";
    if(you=='s'||you=='S')
        {
       str="STONE";
       cout<<str<<"\n";
        }
    else if(you=='p'||you=='P')
    {
       str="PAPER";
       cout<<str<<'\n';
    }
     else if(you=='z'||you=='Z') {
       str="SCISSOR";
       cout<<str<<"\n";
    }
    else
       {
           cout<<"WRONG CHOICE\n!!!!!!!!YOU HAVE ENTERED WRONG CHOICE!!!!!!!\n\tCLICK ONE OF GIVEN\n     s=STONE\tp=PAPER\t z=SCISSOR\n";
           goto jump;
       }
cout<<"COMPUTER ENTERED: ";
    if(computer=='s')  
        { 
        str="STONE";
        cout<<str<<"\n";
        }
    else if(computer=='p')
        {
        str="PAPER";
        cout<<str<<'\n';
        }
    else {
        str="SCISSOR";
        cout<<str<<"\n";
        }
Sleep(1000);
res=game(you,computer);
    if(res==1)
    {
    cout<<"YOU WON!!!!!CONGRATULATIONS.....\n";
    }
    else if(res==0)
    {
    cout<<"SORRY!!!YOU HAVE LOST THE GAME.....\n";
    }
    else if(res==-1)
    {
    cout<<"GAME DRAWN.....\n";
    }
    else
    {
    cout<<"SOME PROBLEM ARISES..........\n";
    }
jump:
Sleep(1000);
cout<<"DO YOU WANT TO PLAY AGAIN?(y/n)\n";
cin>>ch;
if(ch=='y'||ch=='Y')
   goto start;
else if(ch=='n'||ch=='N')
{
    cout<<"THANK YOU...COME AGAIN...";
    Sleep(3000);
    exit(0);
}
else
{
   cout<<"YOU HAVE ENTERED WRONG CHOICE FOR THE QUESTION...\nPLEASE ENTER AGAIN..\n";
   goto jump;
}
}