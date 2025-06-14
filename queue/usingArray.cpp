#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue() {
        size = 100;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isFull() {
        return rear == size;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full\n";
        } else {
            arr[rear++] = x;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Dequeued: " << arr[front++] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i < rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
int choice , value; 

while(true){
 cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";}
cin >> choice; 

switch(choice){
case 1:
cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
		break;

	case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice, try again.\n";
        }
}    
    return 0;
}
