#include<iostream>
using namespace std;


int main(){

int num,m ;
cout << "Enter the number : " << endl;
cin >> num;
unsigned int j;
signed int k;
k = (signed) num;
j = (unsigned) num;
cout << "Unsigned value : " << j << endl;
cout << "Signed value : " << k << endl;
cout << "Hex Value :"<<hex << num << endl;
cout << "Oct value :" << oct << num << endl;


for(int count=31;count>0;count--)
{
num=num/2;
m=num%2;
}

cout<<m<<endl;
return 0;

} 


