// Stack with Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 10
using namespace std;

class Stack
{
protected:
	int stk[MAX], top = -1;

public:

	void push();
    void pop();
	void display();
	void peek();

};
void Stack::push() {
	if (top == MAX - 1)
	{
		cout << "Stack is Full!" << endl;
	}
	else
	{
		int x;
		cout << "Enter the Number you want to Push: ";
		cin >> x;
		stk[++top] = x;
	}
}
void Stack::pop() {
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;
	}
	else
	{
	

		// poping up the single emement from the stack

		cout << "Poped Element of the Stack: ";
		cout << stk[top--];
	}
}
void Stack::display() {
	// poping up all the element from the stack
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;

	}
	else {

			cout << "Element in the stack are = ";
			for (int  i = top; i > -1 ; i--)
			{

				cout << stk[i] << " ";
				top--;
			}
	}
}
void Stack::peek() {
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;
		return;
	}
	cout << "The top element of the stack is:" << stk[top] << endl;
}
int main()
{
	Stack stk;


    int ch;
    do {
        cout << endl;
        cout << "**************Main Menu****************" << endl;
        cout << "1. Push the element in the stack." << endl;
        cout << "2. Pop the single element from the stack." << endl;
        cout << "3. Pop all the element from the stack." << endl;
        cout << "4. Peek the top element from the stack." << endl;
        cout << "5. To exit." << endl;

        cout << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
			stk.push();
            break;
        case 2:
            stk.pop();
            break;
		case 3:
            stk.display();
            break;
		case 4:
            stk.peek();
            break;
      

        case 5:
            return 0;
        default:
            cout << "you enter the wrong choice." << endl;
            break;
        }
    } while (true);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
