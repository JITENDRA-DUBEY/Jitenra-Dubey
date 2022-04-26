// jsg;
#include<iostream>
using namespace std;
class Stack
{
    public:
    int top;
    int Size;
    int*Q;
    //Stack(int size){top=-1;this->size=size;Q=new Node*[this->size];}
    void create(int sz);
    void push(int data);
    int pop();
    void display();
};
void Stack::create(int sz)
{
    top=-1;
    Size=sz;
    Q=new int[sz];
}
void Stack:: push(int data)
{
   if(top==Size-1)
    //cout<<"\nsize value"<<Size;
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
    cout<<"Top value :"<<top;
    while(i>=0)
    {
        cout<<Q[i];
        i--;
    }
}
int main()
{
    Stack st;
    st.create(5);
    st.push(10);
    st.display();
}
