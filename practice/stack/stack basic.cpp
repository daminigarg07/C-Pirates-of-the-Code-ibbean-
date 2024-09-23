#include <iostream>
#include <conio.h>
using namespace std;
class Stack{
	int *data, maxstk,top;
	public:
	Stack()
	{
		maxstk=10;
		data=new int[maxstk];
		top=-1;
	}
	Stack(int n)
	{
		maxstk=n;
		data=new int[maxstk];
		top=-1;
	}
	~Stack() {
        delete[] data;
    }
	void push(int item)
	{
		if(top==maxstk-1)
		{
			cerr<<"OVERFLOW";
			return;
		}
		data[++top]=item;
	}
	void pop()
	{
		if(top==-1)
		{
			cerr<<"UNDERFLOW";
			return;
		}
		top--;
	}
	int peak()
	{
		if(top==-1)
		{
			cerr<<"EMPTY";
			return -1;
		}
		int item=data[top];
		return item;
	}
	bool isEmpty()
	{
		return (top==-1);
	}
	bool isFull()
	{
		return (top==maxstk-1);
	}
	void display()
	{
		cout<<"Stack is "<<endl;
		if(top==-1)
		cout<<"empty"<<endl;
		else
		{
			for(int i=top;i>-1;i--)
			{
				cout<<data[i]<<endl;
			}
		}
	}
};



int main() {
    int n;
    cout << "enter no of elements: ";
    cin >> n;
    Stack s1(n);
    int ch, item;
    do {
        system("cls");
        cout << "1. push\n2. pop \n3. peek \n4. display\n5. exit\n";
        ch = _getch();
        switch (ch) {
            case '1':
                cout << "push: ";
                cin >> item;
                s1.push(item);
                break;
            case '2':
                cout << "POP: ";
                if (s1.isEmpty())
                    cout << "empty \n";
                else
                    s1.pop();
                break;
            case '3':
                cout << "PEEK: ";
                if (s1.isEmpty())
                    cout << "empty \n";
                else
                    cout << "item is: " << s1.peak() << endl;
                break;
            case '4':
                s1.display();
                break;
            case '5':
                break;
            default:
                cerr << "invalid input";
        }
        cout << "Press Enter to continue...";
        while (_getch() != '\r'); // Consume extra characters until Enter is pressed

    } while (ch != '5');
}
