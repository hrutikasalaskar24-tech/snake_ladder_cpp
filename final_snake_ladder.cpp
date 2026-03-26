#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));
char name[20];
int snake[101]={0};
int pos=99;
snake[11]=5;
snake[19]=10;
snake[23]=8;
snake[32]=18;
snake[40]=22;
snake[55]=36;
// snake[68]=42;
// snake[72]=51;
// snake[88]=68;
// snake[96]=15;
// snake[99]=23;

int ladder[100]={0};
ladder[9]=12;
ladder[18]=30;
ladder[29]=35;
ladder[38]=44;
ladder[52]=66;
ladder[77]=80;
ladder[86]=99;
//int rand;
cout<<"enter the name of 1st player:";
cin>>name;
cout<<"enter the name of 2nd player:";
cin>>name;
cout<<"---------------------";
// cout<<"roll the dice for 1st player:";
// cout<<"1st player's position:";
cin.ignore();
int pos1=0;
int pos2=0;
while(true)
{
cout<<"\n player1-press enter to roll the dice:\n";
cin.get();
cout<<"1st player position:\n";


int dice=rand()%6+1;
cout<<"dice="<<dice<<endl;

if(pos1+dice<=100)
{
   pos1+=dice;
}


//pos1+=dice;
if(snake[pos1]!=0)
{
cout<<"\nsnake bite ??\n";
pos1=snake[pos1];
}
if(ladder[pos1]!=0)
{
cout<<"you got ladder!??\n";
pos1=ladder[pos1];
}
cout<<"position="<<pos1<<endl;

if(pos1>=100)
{
cout<<"\n player 1 win!!??";
cout<<"\n player 2 loses!??";
cout<<"\n game over";
break;
}
cout<<"\n------------\n";

cout<<"\n player2-press enter to roll dice:";
cin.get();

dice=rand()%6+1;
cout<<"dice="<<dice<<endl;

if(pos2+dice<=100)
{
   pos2+=dice;
}


//pos2+=dice;
if(snake[pos2]!=0)
{
cout<<"snake bite\n??";
pos2=snake[pos2];
}
if(ladder[pos2]!=0)
{
cout<<"you got a ladder??\n";
pos2=ladder[pos2];
}
cout<<"position="<<pos2<<endl;
if(pos2>=100)
{
cout<<"\n player2 wins!??";
cout<<"\n player 1 loses!??";
cout<<"\ngame over";
break;
}
cout<<"\n------------\n";

}
}

