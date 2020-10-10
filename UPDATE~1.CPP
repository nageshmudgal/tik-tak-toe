#include <iostream>
using namespace std;
int main()
{
char x[3][3]={ {5,5,5},
                      {5,5,5},
                       {5,5,5}
                       };
int a,b,ch;
system("cls");
cout<<"                                                   TIK TAK TOE"<<endl;
cout<<"                                                 BY NAGESH MUDGAL"<<endl;
for (a=0;a<3;a++)
{
    cout<<"                                              ";
   for(b=0;b<3;b++)
    {
       cout<<"\t"<<x[a][b];
      }
    cout<<endl;
}
cout<<"use numbers to play(1-9)"<<"       "<<"0. for exit"<<endl<<endl;




for(int i=1;i<6;i++)
{
cout<<"1st player chance";
cin>>ch;
system("cls");
switch(ch)
{
case 1:
{ x[0][0]='O';
break;
}
case 2:
{ x[0][1]='O';
break;
}
case 3:
{ x[0][2]='O';
break;
}
case 4:
{ x[1][0]='O';
break;
}
case 5:
{ x[1][1]='O';
break;
}
case 6:
{ x[1][2]='O';
break;
}
case 7:
{ x[2][0]='O';
break;
}
case 8:
{ x[2][1]='O';
break;
}
case 9:
{ x[2][2]='O';
break;
}
default :
{
exit(1);
}
}
cout<<"                                                   TIK TAK TOE"<<endl;
cout<<"                                                 BY NAGESH MUDGAL"<<endl;
for (a=0;a<3;a++)
{
	cout<<"                                              ";
   for(b=0;b<3;b++)
    {
       cout<<"\t"<<x[a][b];
      }
    cout<<endl;
}


if(i>2)
{
if(x[0][0]=='O'   &&   x[0][1]=='O'    &&   x[0][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[1][0]=='O'   &&   x[1][1]=='O'    &&   x[1][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[2][0]=='O'   &&   x[2][1]=='O'    &&   x[2][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}

if(x[0][0]=='O'   &&   x[1][0]=='O'    &&   x[2][0]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[1][0]=='O'   &&   x[1][1]=='O'    &&   x[1][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[2][0]=='O'   &&   x[2][1]=='O'    &&   x[2][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}

if(x[0][0]=='O'   &&   x[1][1]=='O'    &&   x[2][2]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[0][2]=='O'   &&   x[1][1]=='O'    &&   x[2][0]=='O')
{
cout<<"first player win, enter any key to exit";
cin>>ch;
exit(1);
}
}


cout<<"2nd player chance";
cin>>ch;
system("cls");
switch(ch)
{
case 1:
{ x[0][0]='X';
break;
}
case 2:
{ x[0][1]='X';
break;
}
case 3:
{ x[0][2]='X';
break;
}
case 4:
{ x[1][0]='X';
break;
}
case 5:
{ x[1][1]='X';
break;
}
case 6:
{ x[1][2]='X';
break;
}
case 7:
{ x[2][0]='X';
break;
}
case 8:
{ x[2][1]='X';
break;
}
case 9:
{ x[2][2]='X';
break;
}
default :
{
exit(1);
}
}
cout<<"                                                   TIK TAK TOE"<<endl;
cout<<"                                                 BY NAGESH MUDGAL"<<endl;
for (a=0;a<3;a++)
{
	cout<<"                                              ";
   for(b=0;b<3;b++)
    {
       cout<<"\t"<<x[a][b];
      }
    cout<<endl;
}





if(i>2)
{
if(x[0][0]=='X'   &&   x[0][1]=='X'    &&   x[0][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[1][0]=='X'   &&   x[1][1]=='X'    &&   x[1][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[2][0]=='X'   &&   x[2][1]=='X'    &&   x[2][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}

if(x[0][0]=='X'   &&   x[1][0]=='X'    &&   x[2][0]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[1][0]=='X'   &&   x[1][1]=='X'    &&   x[1][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[2][0]=='X'   &&   x[2][1]=='X'    &&   x[2][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}

if(x[0][0]=='X'   &&   x[1][1]=='X'    &&   x[2][2]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
if(x[0][2]=='X'   &&   x[1][1]=='X'    &&   x[2][0]=='X')
{
cout<<"second player win, enter any key to exit";
cin>>ch;
exit(1);
}
}



}
return 0;
}
