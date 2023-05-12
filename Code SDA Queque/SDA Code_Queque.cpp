#include <iostream>
using namespace std;
#define max 5

class Queue{
	int front;
	int rear;
	string *queue;
	
public : 
	Queue()
	{
		front = 0;
		rear  = 0;
		queue = new string[max];
	}
	
	bool isFull ()
	{
		if (rear == max)
		{
			return true;
		}
		else{
			return false;
		}
	}
	
	bool isEmpty()
	{
		if (front == -1)
		{
			return true;
		}else{
			return false;
		}
	}
	
	void enqueue(string item)
	{
		if (isFull())
		{
			cout << "- Queue is full!" << endl;
		}
		else if (isEmpty())
		{
			queue[0] = item;
			front++;
			rear++;
		
		}else{
			queue[rear] = item;
			rear++;
		}
	}
	
	void dequeue()
	{
		if (isEmpty())
		{
			cout << "- Queue is empty!" << endl;
		
		}else{
			for (int i = 0; i < rear; i++)
			{
				queue[i] = queue[i+1];
			}
		}
	}
	
	void peek(int posisi)
	{
		int index = 0;
		for (int i = 1 ; i < posisi; i++)
		{
			index++;
		}
		
		cout << posisi << ". " << queue[index] << endl;
	}
	
	void printQueue()
	{
		cout << "Daftar Role : " << endl;
		for (int i = 0; i < max; i++)
		{
			cout << i+1 << ". " << queue[i] << endl;
		}
	}
};

int main()
{
	Queue miaw;
	miaw.enqueue("Hyper");
	miaw.enqueue("Roam");
	miaw.enqueue("Midlane");
	miaw.enqueue("Gold");
	miaw.enqueue("Exp");
	
	miaw.peek(2);
	miaw.printQueue();
}
