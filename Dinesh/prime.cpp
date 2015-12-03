#include<iostream>
using namespace std;

int main()
{

	int n,num,i,j;
	cout << "Enter the number : ";
	cin >> num;
	n = num;
	for(j = 1; j <=10;j++)
	{ for(i = 2; i <= n/2; i++)
	 { if( (n % i) == 0)
	   n++;
        }cout << n << "\t";
	n++;
	}
 return 0;
}
