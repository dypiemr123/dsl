/*Queues are frequently used in computer programming, and a typical example is the creation of a job
queue by an operating system.
If the operating system does not use priorities, then the jobs are processed in the order they enter the
system.
Write C++ program for simulating job queue. Write functions to add job and delete job from queue.*/
#include<bits/stdc++.h>
using namespace std;

class JQueue{
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    JQueue(){front=rear=-1;size=10;Q=new int[size];}
    JQueue(int size){front=rear=-1;this->size=10;Q=new int[this->size];}
    void enqueue(int x);
    void dequeue();
    void display();
};
void JQueue::enqueue(int x){
    if(rear==size-1){
        cout<<"queue if full"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;

    }
}
void JQueue::dequeue(){
    int x=-1;
    if(front==rear){
        cout<<"queue if empty"<<endl;
    }
    else{
      x=Q[front+1];
      front++;
    }
}
void JQueue::display(){
    for (int i=front+1;i<=rear;i++){
        cout<<" job queue is "<<Q[i]<<endl;
    }
}

int main()
{
    JQueue j(10);
    j.enqueue(1);
    j.enqueue(2);
    j.enqueue(3);
    j.enqueue(4);
    j.dequeue();
    j.display();

   
    return 0;
}