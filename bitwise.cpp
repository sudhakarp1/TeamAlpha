#include<iostream>
using namespace std;


int main()
{
int num,cnt;
cout<<"enter the number"<<endl;
cin>>num;

for(cnt=31;cnt >= 0;cnt--)
{
  if(num ^= (1<<cnt))

	cout<<"1";
      
	cout<<"0";
}
return 0;

}

