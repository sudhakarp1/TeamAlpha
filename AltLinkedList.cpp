/* Copyright
 * Author		: Altaf Mahmood
 * Employee ID	: 333841	
 * Date			: 30 November, 2015
 * Time			: 22:46
 * Description	: Program to implement linked list using pointers
 */

 #include <iostream>
 using namespace std;

 class LinkedList{
 private:
 	int data, *start;

 public:
 	LinkedList(int d){
 		data = d;
 		LinkedList *ptr;
 		start = &data;
 		cout << ptr << endl;
 	}
 	void add();
 	void del();
 	~LinkedList(){ 	} 
 };

 int main(){
 	LinkedList l(50);
 	LinkedList *pd = &l;
 	cout << pd <<endl;
 	return 0;
 }
