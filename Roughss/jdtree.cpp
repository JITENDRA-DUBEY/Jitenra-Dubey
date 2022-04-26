/* JSG Binary Tree Creation
1.first create a Queue by using ll.
2.create a class tree/*/
#include<iostream>
#include<conio.h>
using namespace std;
class nodeQ
{
    public:
    int data;
    nodeQ*next;
    nodeQ(){data=0;next=NULL;}
    nodeQ(int data){this->data=data;next=NULL;}
};
class Queue
{
   public:
   nodeQ*front,*rear;
   Queue(){front=rear=NULL;}
   void enQueue(int data);
   int deQueue();
   int isEmpty();
};
void Queue::enQueue(int data)//insertion from rare
{
    nodeQ*t=new nodeQ(data);
    if(front==NULL)
    {
        front=rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }
}
int Queue::deQueue()
{
    int x=-1;
   if(front==NULL)
   return -1;
   nodeQ*temp=front;
   x=front->data;
   front=front->next;
   delete temp;
   return x;
}
int Queue::isEmpty()
{
    if(front==NULL)
    return 1;
    else
    return 0;
}
int main()
{
    Queue q;
    int i=1;
    while(i<=5)
    {
        q.enQueue((10*i));i++;
    }
    i=1;
    cout<<"ele :"<<q.deQueue()<<endl;
    while(i++<5)
    {
        cout<<"ele :"<<q.deQueue()<<endl;
    }
}

