main.cpp
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList lk1;
	
	lk1.insertToHead(30);
	lk1.insertToHead(50);
	lk1.insertToTail(89);
	lk1.deleteFromTail();
	
	lk1.deleteByValue(50);
	lk1.printAll();
	
	return 0;
}

LinkedList.cpp
#include <iostream>

using namespace std;
// code linked list that can delete a node by spesific value//

void LinkedList::deleteByValue(int input)
{
	Node *delNode;
	Node *tmp = head;
	
	if (input == head->value)
	{
		head = head->next;
		delete tmp;
		
	}
	else{
		
		while (tmp->value != input)
		{
			tmp = tmp->next;
		}
		delNode = tmp->next;
		tmp->next     = delNode->next;
		delNode = NULL;
		delete delNode;
	}
}
//linked list code that we want insert new node to head//
void LinkedList::insertToHead(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = head;
	head		   = newNode;
	
	if (tail == NULL)
	{
		tail = head;
	}
}
//linked list code that we want insert new node after spesific node//

void LinkedList::insertAfter(int item, int input)
{
	Node *newNode	= new Node();
	newNode->value	= input;
	
	Node *tmp = head;
	while (tmp->value != item)
	{
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	tmp->next	  = newNode;
}

void LinkedList::insertToTail(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = NULL;
	tail->next	   = newNode;
	tail		   = newNode; 
}

void LinkedList::deleteFromHead()
{
	Node *delNode = head;
	head = head->next;
	delete delNode;
}


//linked list code for delete from tail//
void LinkedList::deleteFromTail()
{
	Node *tmp = head;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	Node *delNode = tmp->next;
	tail = tmp;
	tail->next = NULL;
	delete delNode;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp != NULL){
		cout << tmp->value;
		if (tmp->next != NULL)
		{
			cout << "->";
		
		}else{
			
			cout << " ";
		}
		tmp = tmp->next;
	}
	cout<<endl;
}

LinkedList.h
class Node{
	
	public :
		int value; 
		Node *next;	
		
		Node(){ 
			next = NULL;	
		}
};

class LinkedList {
	
	public:
		
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int); 
	
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		bool isEmpty();
		
		void printAll();
		
		LinkedList(){
			head = tail = NULL;
		}
};
