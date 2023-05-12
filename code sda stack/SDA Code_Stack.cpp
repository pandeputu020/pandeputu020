#include <iostream>
using namespace std;
#define max 5

class Stack{
	int top;
	string *stack;

public : 
	Stack()
	{
		top = 0;
		stack = new string[max];
	}
	
	bool isFull()
	{
		if (top == max)
		{
			return true;
		}else{
			return false;
		}
		
	}
	
	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}else{
			return false;
		}
	}
	
	void pushStack (string item)
	{
		if (isFull())
		{
			cout << "- Stack is Full" << endl;
		
		}else
		{
			stack[top] = item;
			top++;
		}
		
	}
	
	void popStack ()
	{
		if (isEmpty())
		{
			cout << "- Stack is empty" << endl;
		
		}else{
			
			top--;
			stack[top] = "";
		}
	}
	
	void peekStack (int posisi)
	{
		int index = top;
		for (int i = 0; i < posisi; i++)
		{
			index--;
		}
		cout << posisi << ". " << stack[index] << endl;
	}
	
	void changeStack (string item, int posisi)
	{
		int index = top;
		for (int i = 0; i < posisi; i++)
		{
			index--;
		}
		
		stack[index] = item;
	}
	
	void printStack ()
	{
		
			for (int i = max - 1; i >= 0; i--)
			{
				if (stack[i] != "")
				{
					cout << stack[i] << endl;
				}
			}

	}
};

int main()
{
	Stack q1;
	q1.pushStack("A");
	q1.pushStack("B");
	q1.pushStack("C");
	q1.pushStack("D");
	q1.pushStack("E");
	q1.changeStack("F", 5);
	q1.printStack();
}
