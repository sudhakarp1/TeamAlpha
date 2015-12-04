
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
	LoopInput(one);
	two = one;
	two.disp();
	
	int *arrStart, *arrEnd;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	arrStart = arr;
	arrEnd = arrStart + (sizeof(arr)/4) - 1;
	List three;

	//three.addArray(arrStart, arrEnd);
	//three.disp();		

	return 0;
 }
