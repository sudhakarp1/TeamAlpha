#include <iostream>
using namespace std;
struct Sample{
	Sample(int x=0){cout<<"Sample()"<<endl; }
	~Sample(){cout<<"~Sample()"<<endl; }
};

class Pointer{ //smart poiner class
	Sample *ptr;
public:
	Pointer(int x=0){ptr = new Sample(x); }
	~Pointer(){delete ptr; }	
};

void recur(int);
int main(){
	try {
		recur(1);
		cout<<endl;
	}catch(int var){
		cout<<"Caught "<<var<<endl;
	}
}

void recur(int num){
	Pointer p(num);
	if(num<=5){
		cout<<num<<"  ";
		recur(num+1);
		cout<<num<<"  ";
	}
	throw num;
}
