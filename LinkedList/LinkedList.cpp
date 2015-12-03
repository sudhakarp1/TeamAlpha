
/* Copyright
 * Author	: Altaf Mahmood & Surbhi Jain
 * Employee ID	: 333841 & 334082	
 * Date		: 02 December, 2015
 * Time		: 09:51
 * Description	: Program to implement linked list using pointers
 */

 #include <iostream>
 #include "List.h"
 using namespace std;

int LoopInput(List &);

 int main(){
 	List one;
	List two;
	one.add(40);
	one.add(30);
	one.add(20);
	one.add(10);
	one.disp();
	//LoopInput(one);
	two = one;
	two.disp();
	List three;
	//three = two;
	three.add(140);
	three.add(130);
	three.add(120);
	three.add(110);
	three.disp();
	three = three;	
	three.disp();
//	two.disp();
	return 0;
 }
