#include <iostream>
#include <string>
using namespace std;

template <typename T>
void fun(T var){
	cout<<"Var: "<<var<<endl;
}
template <typename T>
void fun(T var1,T var2){
	cout<<"Var1: "<<var1 <<"\tVar2 "<<var2<<endl;
}

int main(){
	fun<double>(10,203.45);
	fun<int>(10,203.45);

}

