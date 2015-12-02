/* Copyright
 * Author	: Altaf Mahmood
 * Employee ID	: 333841	
 * Date		: 30 November, 2015
 * Time		: 22:46
 * Description	: Program to implement linked list using pointers
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

	void add(int);
	void add(int , int);
	void disp();
	void del();
	void del(int);
	void delData(int);
	List(const List &obj){
		start = obj->start;
		Node* temp;
		while(temp){
	           
		   temp = temp->next; 
		}
	}

	~List(){
		Node *temp;
		while(temp){
			temp = start->next;
			delete(start);
			start = temp;
		}
		delete(temp);
	}
}; 
	
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
		
void List::disp(){
	Node *temp = start;
	while(temp){
		cout << "\t\t" << temp->data << endl;
		temp = temp->next;
	}
}
	
void List::del(){
	Node *temp;
	temp = start;
	start = temp->next;
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


 int main(){
 	List one;
	List two;
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
	two = one;
	return 0;
 }
