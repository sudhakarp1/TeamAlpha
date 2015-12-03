
/* Copyright
 * Author	: Altaf Mahmood & Surbhi Jain
 * Employee ID	: 333841 & 334082
 * Date		: 02 December, 2015
 * Time		: 22:46
 * Description	: Program to implement linked list using pointers
 */

#include "List.h"

void List::add(int d){
	Node *New = new Node;
	if(start == 0){
	  start = New;
	  New->data = d;
	  New->next = NULL;
	}
	else{
	  Node *temp = start;
	  start = New;
	  New->next = temp;
	  New->data = d;
	}
}

void List::add(int d, int pos){
	Node *New = new Node;
	Node *temp;
	int count = 2;
	temp = start;
	while(temp && count < pos){
		temp = temp->next;
		count++;
	}
		
	if(temp == 0){
		cout << "\nNo position found.. Adding at end " << endl;
		add(d,count-1);			
	}
	else{
		New->next = temp->next;
		temp->next = New;
		New->data = d;	
	}
}
	

/*void List::addArray(int *arrStart, int *arrEnd){
	Node *New = new Node();
	if(start == 0){
	  start = *arrStart;
	  
	  
}*/
	
void List::disp(){
	Node *temp = start;
	while(temp){
		cout << "\t\t" << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}


List::~List(){
	Node *temp;
	while(temp){
		temp = start->next;
		delete(start);
		start = temp;
	}
	delete(temp);
}

void List::del(){
	Node *temp;
	temp = start;
	start = temp->next;
	delete(temp);
}

List::List(const List &obj){
	Node* New = new Node;
	Node* start = New;
	New->next = NULL;
	Node* temp = obj.start;
	Node* tmp = start;
	while(temp){
	   Node* New = new Node;   
	   New->data = temp->data;
	   temp = temp->next;
	   tmp->next = New;
	}
}

List& List::operator =(const List &obj){
	if(start == obj.start){
	   cout << "Executed" << endl;
 	   return *this;
	}
	else{
	   if(start != NULL){
		delAll(this->start);
   	   }
	   Node* temp = obj.start;
	   Node* tmp = start = new Node(*obj.start);
	   if(temp ) temp = temp->next;
	   while(temp){
	   	tmp->next = new Node(*temp);
	   	tmp = tmp->next;
	   	temp = temp->next;
	   }
	}
	return *this;
}

void List::delAll(Node* start){
	Node *temp;
	while(temp){
		temp = start->next;
		delete(start);
		start = temp;
	}
	delete(temp);
}

void List::del(int pos){
	Node *temp, *del;
	int count = 2;
	temp = start;
	while(temp && count < pos){
		temp = temp->next;
		count++;
	}
		
	if(temp == 0){
		cout << "\nNo position found\n "; 			
	}
	else{
		del = temp->next;
		temp->next = del->next;
		delete(del);	
	}
	
}
	
void List::delData(int d){
	Node *temp, *del;
	int count=0, flag=0;
	temp = start;
	while(temp){
		if (temp->data == d){
		   if(temp == start){
		   	flag = 10;
			start = temp->next;
			delete(temp);
			//temp = start;
		   }
		   else{
			del->next = temp->next;
			delete(temp);
			temp = del;
		   }
			count++;
		}	
		if(flag){
			temp = start;
			flag = 0;
		}
		else{
		del = temp;
		temp = temp->next;
		}
	}
	if(!count)
		cout << "\nNot found\n";
}


