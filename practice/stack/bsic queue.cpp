#include <iostream>
#include <conio.h>

using namespace std;

class Queue {
    int *data, maxq, front, rear;

public:
    Queue() {
        maxq = 10;
        data = new int[maxq];
        front = rear = -1;
    }

    Queue(int n) {
        maxq = n;
        data = new int[maxq];
        front = rear = -1;
    }

    ~Queue() {
        delete[] data;
    }

    void add(int item) {
        if (rear == maxq - 1) {
            cerr << "OVERFLOW";
            return;
        }
        if (front == -1) {
            rear = front = 0;
        } else {
            rear++;
        }
        data[rear] = item;
    }

    void del() {
        if (front == -1) {
            cerr << "UNDERFLOW";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    int peak() {
        if (front == -1) {
            cerr << "EMPTY";
            return -1;
        }
        int item = data[front];
        return item;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == maxq - 1);
    }

    void display() {
        cout << "Queue is " << endl;
        if (front == -1)
            cout << "empty" << endl;
        else {
            for (int i = front; i <= rear; i++) {
                cout << data[i] << endl;
            }
        }
    }
};

int main() {
    int n;
    cout << "enter no of elements: ";
    cin >> n;
    Queue q1(n);
    int ch, item;
    do {
        system("cls");
        cout << "1. add\n2. del \n3. peek \n4. display\n5. exit\n";
        ch = _getch();
        switch (ch) {
            case '1':
                cout << "add: ";
                cin >> item;
                q1.add(item);
                break;
            case '2':
                cout << "DEL: ";
                if (q1.isEmpty())
                    cout << "empty \n";
                else
                    q1.del();
                break;
            case '3':
                cout << "PEEK: ";
                if (q1.isEmpty())
                    cout << "empty \n";
                else
                    cout << "item is: " << q1.peak() << endl;
                break;
            case '4':
                q1.display();
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
