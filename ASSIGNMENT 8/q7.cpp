#include <iostream>
using namespace std;

template <class T>
class Queue {
    T arr[5];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(T x) {
        if(rear < 4) {
            arr[++rear] = x;
        }
    }

    void dequeue() {
        if(front <= rear) {
            cout << "Removed = " << arr[front++] << endl;
        }
    }
};

int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();

    return 0;
}