#include <iostream>
#include <string>
using namespace std;

template <typename T>
void fun(T var){
	cout<<"Var: "<<var<<endl;
}
template <typename T1,typename T2>
void fun(T1 var1,T2 var2){
	cout<<"Var: "<<var<<endl;
}
void fun(int var){
	cout<<"Int: "<<var<<endl;
}
struct Sample{
	Sample(int x=0){cout<<"Sample()"<<endl; }
	~Sample(){cout<<"~Sample()"<<endl; }
	//ostream& operator<<(ostream&, Sample &);
};

ostream& operator<<(ostream &out, Sample &obj){
	out<<"Sample out ..."<<endl;
	return out;
}

int main(){
	fun(10);
	fun('a');
	fun("Hello how are you");
	fun(string("Hello..."));
	fun(10.345);
	fun(324.456f);
	fun(Sample(10));
}

