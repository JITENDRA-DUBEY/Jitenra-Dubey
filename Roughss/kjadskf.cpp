// JSG BST using preorder
#include<iostream>
using namespace std;
/*class Node
{
    public:
int data;
Node* lchild;
Node *rchild;
public:
Node(){
    lchild=rchild=NULL;
}
};*/
class Stack
{
    public:
    int top;
    int Size;
    int*Q;
    Stack(int sz){top=-1;this->Size=sz;Q=new int[sz];}
    void push(int data);
    int pop();
    void display();
};
 void Stack:: push(int data)
{
   if(top==Size-1)
   cout<<"\nStack overflow : "<<endl;return ;
    top=top+1;
    Q[top]=data;
}
int Stack:: pop()
{
    int x=-1;
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
    //Node*t=new Node();
    Stack st(5);
    int i=0;
     cout<<"Y+TOP V : "<<st.Size;
     st.push(10);
      cout<<"Y+TOP V : "<<st.top;
    while(i<5)
    {
      st.push(i*10);i++;
    }
    cout<<"Y+TOP V : "<<st.top;
    cout<<"Poped out value : "<<st.pop();
    st.display();

}
