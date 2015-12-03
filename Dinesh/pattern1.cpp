#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter no of lines- ";
	cin>>num;
	cout<<endl;
	for(int i=1;i<=num;i++)
	{ 
		for(int j=num;j>i;j--)
		 cout<<" ";
		 for(int k=1;k<=i;k++)
		  cout<<"* ";
		 cout<<endl; 
		  
	} 
	return 0;
}
