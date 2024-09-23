#include <iostream>

using namespace std;

class CircularQueue {
private:
    int *data;
    int capacity;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int cap) : capacity(cap), front(-1), rear(-1), size(0) {
        data = new int[capacity];
    }

    ~CircularQueue() {
        delete[] data;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity; // Circular increment
        }
        data[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity; // Circular increment
        }
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Circular Queue elements: ";
        int i = front;
        do {
            cout << data[i] << " ";
            i = (i + 1) % capacity;
        } while (i != (rear + 1) % capacity);
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the circular queue: ";
    cin >> capacity;

    CircularQueue cq(capacity);

    int choice, value;
    do {
        cout << "\nCircular Queue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                cq.enqueue(value);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
