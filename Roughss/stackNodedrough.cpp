// JSG BST using preorder
#include<iostream>
using namespace std;
class Node
{
    public:
int data;
Node* lchild;
Node *rchild;
public:
Node(){
    lchild=rchild=NULL;
}
};
class Stack
{
    public:
    int top;
    int size;
    Node**Q;
    Stack(int sz){top=-1;this->size=sz;Q=new Node*[size];}
    void push(Node* data);
    Node* pop();
    void display();
};
 void Stack:: push(Node* data)
{
   if(top==size-1)
   cout<<"\nStack overflow : "<<endl;return ;
    top=++top;
   Q[top]=data;
}
Node* Stack:: pop()
{
    Node *x=NULL;
   if(top==-1)
   cout<<"\nStack underflow : "<<endl;return x;
   x=Q[top--];
   return x;
}
void Stack::display()
{
    int i=top;
    while(i>=0)
    {
        cout<<Q[i];
        i--;
    }
}
int main()
{
    Node*t=new Node();
    Stack st(5);
    int i=0;
     cout<<"Y+TOP V : "<<st.size;
    while(i<5)
    {
      st.push(t);i++;
    }
    cout<<"Y+TOP V : "<<st.top;
    st.display();

}
