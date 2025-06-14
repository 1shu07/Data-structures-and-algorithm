#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int x) {
        Node* t = new Node;
        if (t == nullptr) {
            cout << "Queue is full" << endl;
            return;
        }
        t->data = x;
        t->next = nullptr;

        if (front == nullptr) {
            front = rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* t = front;
        front = front->next;
        delete t;

        if (front == nullptr) rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    bool isFull() {
        Node* t = new(nothrow) Node;
        if (t == nullptr) return true;
        delete t;
        return false;
    }

    void display() {
        Node* p = front;
        cout << "Queue: ";
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
