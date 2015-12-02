
/* Copyright
 * Author	: Altaf Mahmood & Surbhi Jain
 * Employee ID	: 333841 & 334082
 * Date		: 02 December, 2015
 * Time		: 09:44
 * Description	: Header File for List
 */
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;  
};

class List{
 private:
	Node *start;
 public:
	List(){
	  	start = 0;	
	}
	List(const List &);

	List& operator =(const List &);
	void add(int);
	void add(int , int);
	void disp();
	void del();
	void del(int);
	void delData(int);

	~List();
}; 
	
