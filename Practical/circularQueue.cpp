#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    private:
        int *arr;
        int front;
        int rear;
        int size;

    public:
        CircularQueue(int n){
            size=n;
            arr = new int[size];
            front=-1;
            rear=-1;
        }

        bool isFull(){
            return (front==0 && rear==size-1) || (rear==(front-1)%(size-1));
        }

        bool isEmpty(){
            return (front==-1);
        }

        void enqueue(int value){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }
            if(front==-1){
                front=rear=0;
            }
            else if(rear==size-1 && front!=-0){
                rear=0;
            }
            else rear++;

            arr[rear]=value;
            cout<<"Value enqueued";
        }

        void deQueue(int value){
            if(isEmpty()){
                cout<<"Empty queue"<<endl;
                return;
            }

            cout << arr[front] << " dequeued from queue\n";

            if(front==rear){
                front=rear=-1;
            }
            else if(front==size-1){
                front=0;
            }
            else front++;
        }
}