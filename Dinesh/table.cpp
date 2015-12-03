#include<iostream>
using namespace std;

int main()
{ 
	int a[15][15], n, j, num;
	cout << "Enter the number : ";
	cin >> num;
	n = num;
	cout << "\t";
	for(int i = 1; i <= 10; i++)
	{ a[0][i] = n;
	 cout << a[0][i] << "\t";
	 n = n + 1;
	}
	cout << endl;
	n = num;
	for(int i = 1; i <= 10;i++)
	{ a[i][0] = n;
           cout << a[i][0] << "\t";
            for(j = 1; j <= 10; j++)
	  {  a[i][j] = a[i][0] * a[0][j];
             cout << a[i][j] << " \t";
          }
	 n++;
	 cout <<"\n";

	}
	return 0;
}
