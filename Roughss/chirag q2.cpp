#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
    public:int data,prr;
    Node*next;

};
class prq
{

    public:
     Node*front,*rear;
    prq(){front=rear=NULL;}
    void Push(int data);
    int Peek();
    int Pop();
    int count=0;
    void display();
};//inserting elemenet in ascending order of priority Queue i.e highers priority to lowest priority O(n) insertion +searchshortest position
void prq::Push(int data)// insert a node at shortest po
{
    count++;
    Node*q=NULL,*t=new Node;
    t->data=data;
    t->prr=count;
    t->next=NULL;
    if(front==NULL)//Insertion a node before first pos
    {
      front=rear=t;
    }
    else
    {
        Node*p=front;
        while(p&&p->prr>count)
        {
            q=p;p=p->next;
        }
        if(p==front)
        {
            t->next=front;
            front=t;
        }
        else{
            t->next=p;
            q->next=t;
        }
    }

}
void prq::display()
{
    Node*p=front;
    if(front==NULL)
    cout<<"\n Queue is empty";
    else{
       while(p!=NULL)
       {
           cout<<p->data<<endl;
           p=p->next;
       }
    }
}
/*int prq::Peek()
{
    int x=-1;
    if(front==NULL)
    cout<<"Queue is already empty";
    else{
        return front->data;
    }
    return x;
}*/
// top of the element according to the priority here this is front ele O(1);
int prq ::Pop()
{
  if(front==NULL)
  {cout<<"Queue Underflow"<<endl;
  return -1;
  }
Node*temp;
temp=front;
int x=front->data;
front=front->next;
delete temp;
return x;
}

int main()
{
    prq Q;
    /*Q.Push(10,3);
    Q.Push(14,5);
    Q.Push(16,1);
    Q.Push(17,0);
    Q.Push(18,2);
    Q.Push(20,8);
    Q.Push(184,6);
    Q.display();
    cout<<"\nPeek Data : "<<Q.Peek();
    cout<<"\n Deleted Element : "<<Q.Pop();
     cout<<"\nPeek Data : "<<Q.Peek();*/
     Q.Push(4); Q.Push(5); Q.Push(7); Q.Push(6); Q.Push(8);Q.Push(5);
     Q.display();
     while(Q.front!=NULL)
     {
        cout<<"\n Deleted Element : "<<Q.Pop();

     }


}
