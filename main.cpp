#include <windows.h>
#include <iostream>
#include<iomanip>
#include<conio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
char A[20],B[20];
char ch;
int i=0,y=0;
void gotoxy(int ,int);
void pldtl();
void scoring()
{

    cout<<" SCORING : "<<endl;

    cout<<"Enter player 1's name : ";
    cin>>A;
    Sleep(1000);
    cout<<endl;

    cout<<"Enter player 2's name : ";
    cin>>B;

    cout<<endl;
    Sleep(500);
    system("cls");

    cout<<" LOVE ALL !!! PLAYYYYYYYYYYYY ";
    Sleep(2000);
    system("cls");
    for(int k=5;k<10;k++)
        {
    gotoxy(5,k);
    cout<<" <> "; }
     for(int k=5;k<10;k++)
        {
    gotoxy(20,k);
    cout<<" <> "; }
gotoxy(5,4);
cout<<"  <?><?><?><?><?> ";
gotoxy(5,10);
cout<<"  <?><?><?><?><?> ";
gotoxy(7,3);
cout<<A;
   for(int k=5;k<10;k++)
        {
    gotoxy(50,k);
    cout<<" <> "; }
     for(int k=5;k<10;k++)
        {
    gotoxy(65,k);
    cout<<" <> "; }
gotoxy(50,4);
cout<<"  <?><?><?><?><?> ";
gotoxy(50,10);
cout<<"  <?><?><?><?><?> ";
gotoxy(52,3);
cout<<B;

gotoxy(58,7);
cout<<" 0 ";
gotoxy(13,7);
cout<<"0";
Sleep(2000);
while((i!=11)&&(y!=11))
    {

        gotoxy(30,20);
        cout<<" Enter A to increase A's score and B to increase B's score : ";
        cin>>ch;
        if(ch=='a'||ch=='A'){
    i++;
    gotoxy(13,7);
    cout<<i;
        }
    if(ch=='b'||ch=='B'){
        y++;
        gotoxy(58,7);
        cout<<y<<" ";
    }
    if((i==10)&&(y==10))
        {
            gotoxy(32,10);
            cout<<"DEUCE !! ";
            do {
            gotoxy(30,20);
        cout<<" Enter A to increase A's score and B to increase B's score : ";
        cin>>ch;
        if(ch=='a'||ch=='A'){
    i++;
    gotoxy(13,7);
    cout<<i;
        }
    if(ch=='b'||ch=='B'){
        y++;
        gotoxy(58,7);
        cout<<y<<" ";
    }
            }
while(abs(i-y)<2);
if(i>y)
{
        gotoxy(30,20);
        cout<<A<<"   WINS                                                                                                                      ";
    }
    else
     {
        gotoxy(30,20);
        cout<<B<<"   WINS                                                                                                                      ";
    }


break;
        }
    if(i==11)
    {
        gotoxy(30,20);
        cout<<A<<"   WINS                                                                                                                      ";
    }
     if(y==11)
    {
        gotoxy(30,20);
        cout<<B<<"   WINS                                                                                                                      ";
    }




}
}

void gotoxy (int x, int y)
 {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}
int main()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int i;



 SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
 cout<<" TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
 for(int i=0;i<20;i++)
    cout<<"TT"<<"                                                                                             TT \n";
cout<<" TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;

gotoxy(5,3);

SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
cout<<" TABLE TENNIS      ";
Sleep(1300);
cout<<"DATABASE AND SCORING SOFTWARE"<<"\n"<<"  ";
gotoxy(25,12);
cout<<"+";
gotoxy(24,13);
cout<<"+";
gotoxy(23,14);
cout<<"+";
gotoxy(22,15);
cout<<"+";
gotoxy(24,16);
cout<<"+";
gotoxy(25,15);
cout<<"+";
gotoxy(26,14);
cout<<"+";
gotoxy(27,13);
cout<<"+";
gotoxy(28,12);
cout<<"-";
gotoxy(40,20);
Sleep(700);
cout<<" By Niloy Sarkar ";
Sleep(1500);
system("cls");

cout<<"                                                             MENU                                                                  ";
int n;
cout<<" PRESS \n ";
cout<<" 1 : Scoring \n ";
cout<<" 2 : Fixtures \n ";
cout<<" 3 : Player Details \n ";
cout<<" 4 : Match records \n ";
cin>>n;


switch(n)
{


case 1:
    {
        cout<<" Only scoring " ;
        Sleep(1000);
        system("cls");
        scoring();
        break;
    }
case 2 :
    {
        cout<<" MAKING FIXTURES ";
        break;
    }
case 3:
    {
        cout<< " Player Details ";
        pldtl();
        break;
    }
case 4 :
    {
        cout<<" RECORDS ";
        break;
    }
}
}


void pldtl()
{
    cout<<" ------- \n -------- " ;
}

