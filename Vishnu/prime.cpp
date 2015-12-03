#include<iostream>
using namespace std;

int main()
{
	int n,i, count=0;
cout<<"enter the no";
cin>>n;

for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
count=1;
break;
}}
if(count==0)
cout<<"this is a prime no";
else
cout<<"this is not a prime no";

return 0;
}
