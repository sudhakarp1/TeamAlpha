#include<iostream>
using namespace std;

int main()
{
int year,month,c,y,i,d;
int firstday=0, day = 1;

cout<<"Enter the month and year : "<<endl;
cin>>month >> year;

y = year-(14-month)/12;
c = month+12*((14-month)/12);

firstday=(day+y+y/4-y/100+y/400+(31*c/12))%7;

cout << "Mon\tTue\tWed\tThur\tFri\tSat\tSun\n\n"<<endl;

int m=firstday;

for(i=0;i<m;i++)
{
cout << "\t";
}
for(i = 1; i <= 31; i++)
{
 cout << i << "\t";
 if((i+m)%7 == 0)
 {cout << "\n";}}
return 0;
}






