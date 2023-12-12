/*A double-ended queue(deque) is a linear list in which additions and deletions may be made at either
end. Obtain a data representation mapping a deque into a one-dimensional array. Write C++ program to
simulate deque with functions to add and delete elements from either end of the deque.*/
#include<iostream>
using namespace std;

class DEQueue
{
private:
    int size;
    int front;
    int rear;
    int *Q; 
public:
   DEQueue(){front=rear=-1;size=10;Q=new int[size];}
   DEQueue(int size){front = rear=-1;this->size=10;Q= new int[this->size];}
   void enqueuefront (int x);
   void enqueuerear (int x);
   void dequeuefront ();
   void dequeuerear ();
   void display();
   bool isEmpty();
   bool isFull();
};
bool DEQueue::isFull(){
    if (rear==size-1){
        return true;
    }
    else{
        return false;
    }
}
bool DEQueue::isEmpty(){
    if (front==rear){
        return true;
    }
    else{
        return false;
    }
}

void DEQueue::enqueuefront(int x){
    if (front == -1){
        cout<<"DEQueue is full"<<endl;
    }
    else{
        Q[front] = x;
        front--;
    }
}
void DEQueue::enqueuerear(int x) {
    if (isFull()){
        cout << "DEQueue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
void DEQueue::dequeuefront(){
    int x=-1;
    if (isEmpty()){
        cout<<"DEQueue underflow"<<endl;
    }
    else{
        x=Q[front];
        front++;
    }
}
void DEQueue::dequeuerear(){
    int x=-1;
    if (isEmpty()){
        cout<<"DEQueue underflow"<<endl;
    }
    else{
        x=Q[rear];
        rear--;
    }
}
void DEQueue::display(){
    for (int i=front+1;i<=rear;i++){
        cout<<"the DEQueue is "<<Q[i]<<endl;
    }

}
int main(){
    DEQueue d(10);
    d.enqueuefront(2);
    d.enqueuefront(3);
    d.enqueuerear(8);
    d.enqueuerear(5);
    d.dequeuefront();
    d.dequeuerear();
    d.display();
return 0;
}