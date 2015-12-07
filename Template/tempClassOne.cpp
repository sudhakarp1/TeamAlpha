#include <iostream>
using namespace std;

template <typename T>
class Sample{
	T data;
public:
	Sample(T x=T()):data(x){ }
	~Sample(){data=T(); };
	void disp();
};

template <typename T>
void Sample<T>::disp(){
	cout<<"Data: "<<data<<endl;
}

int main(){
	Sample<int> iObj=10, iObj2;
	Sample<string> sObj=string("Hello hooo");	
	Sample<double> dObj=123.3455;

	iObj2.disp();
	iObj.disp();
	sObj.disp();
	dObj.disp();
	

}

