#include<iostream>
using namespace std;

int main()
{

int num;

cout<<"enter the no:";
cin>>num;

for(int i=1; i<=num; i++)
{
 	for(int j=num-i;j>0;j--){
	cout<<"  ";
	}
	for(int k=0;k<i;k++){
	cout<<"*"<<"    ";
	}

	
cout<<endl;	
}
return 0;
}
