

/* Copyright
 * Author	: Altaf Mahmood & Surbhi Jain
 * Employee ID	: 333841 & 334082	
 * Date		: 02 December, 2015
 * Time		: 09:54
 * Description	: Program to take input and construct List 
 */

#include "List.h"

 int LoopInput(List &one){
	int i, choice, d, pos;
	i=10;	
	while(i){
		cout << "\n-----------------------------------------------------------------------" << endl;
		cout << "\t1) Add elements\n\t2) Add element at Position\n\t3) Display\n\t4) Delete\n\t5) Delete at position\n\t6) Delete according to data\n\tAny other number to exit" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "\n\tEnter Choice: " ;
		cin >> choice;
		switch(choice){
		  case 1:
			cout << "\nEnter the data to add at the begining of the linked list: ";
			cin >> d;	
			one.add(d);
			break;
		  case 2:
			cout << "\nEnter the data to add and the position: ";
			cin >> d >> pos;	
			one.add(d,pos);
			break;
		  case 3:
			cout << "\n**********Linked List Data************\n";
			one.disp();
			break;
		  case 4:
			one.del();
			break;
		  case 5:
			cout << "\nEnter the position: ";
			cin >> pos;
			one.del(pos);
			break;
		  case 6:
			cout << "\nEnter the data to be searched and deleted: ";
			cin >> d;
			one.delData(d);
			break;
		  default:
			i=0;
			break;
		}
	}
	return 0;
 }
