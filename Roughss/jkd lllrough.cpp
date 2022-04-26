//jsf Priority Enqueue having unlimited priority that'by we are using ll;
//we first store element in given order than perform operation ; last velement has higher priority;here
#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
   Node(){this->data=0;}
   Node(int data){this->data=data;this->next=NULL;}
};
class QueueLL
{
    public :
    Node*front,*rear;
     QueueLL(){front=rear=NULL;}
    void Push(int data);
    int Peek();
    int Pop();
    void display();

};
void QueueLL::Push(int data)
{
   Node*q=NULL;
   Node*t=new Node(data);
   if(front==NULL)
   {
       front=rear=t;
   }
   else{
       Node*p=front;
       while(p->data>data&&p!=NULL){q=p;p=p->next;}
       if(p==front)// insert node before front
       {
          t->next=front; front=t;
       }
       else{

            t->next=p;
               q->next=t;

       }
   }
}
void QueueLL::display()
{
    cout<<"Your Queue : "<<endl;
    if(front==NULL)
    cout<<"\n Queue is empty";
    else{
    Node*p=front;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    }
}
int QueueLL:: Peek()//O(1)
{

    if(front==NULL)
    {cout<<"\nYour Queue is already empty"; return -1;}
    else
    return rear->data;
}
// find max priority element than popout;
int QueueLL::Pop()
{
    Node*temp,*q=NULL,*p=front;
    int x=Peek();
    if(x==-1)
    cout<<"Underflow :"<<endl;
    else
    {

    while(p->data!=x){q=p;p=p->next;}
       if(p!=front){
       delete p;
       q->next=NULL;
       rear=q;}
    }
    if(p!=front)
    return x;
    else
    { x=front->data;
    delete front;
    cout<<"\n Value of front :"<<front<<endl;
    return x;}

}
int main()
{
    QueueLL Q;
    Q.Push(19);
    Q.Push(18);
   /* Q.Push(16);
    Q.Push(17);
    //Q.Push(184);
    Q.Push(10);
    Q.Push(17);/*/
    Q.display();
    int i=1;
    /*while(i<=7)
     {

         cout<<"\nPeek Data : "<<Q.Peek();
          cout<<"\nDeleted Element : "<<Q.Pop();
          i++;


     }/*/
}
