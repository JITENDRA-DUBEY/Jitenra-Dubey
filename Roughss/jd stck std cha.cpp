// jsg stack impletation by using LL in c concept;
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{

    char data;
    Node*next;
}*Top=NULL;
void Push(char x)
{
    Node*t=new Node;
    if(t==NULL)// heap is full unable to creat a node inside heap
    {
        cout<<"\nStack OverFlow";
    }
    else
    {
        t->data=x;
        t->next=Top;// so that always node insert before top node(LIFO)
        Top=t;
    }
}
void Display()
{
    Node*p=Top;
    if(p==NULL)
    cout<<"\nStack is Empty";
    else
    {
        while(p)
        {
            cout<<"\nYour Stack Data : "<<p->data;
            p=p->next;
        }
    }
}
char  Pop()
{
    char x='1';
    Node*t;
    if(Top==NULL)
    cout<<"\nStack UnderFlow ";
    else
    {
        t=Top;
        x=Top->data;
        Top=Top->next;
        delete(t);
    }
    return x;
}
int Peek(int index)
{
    Node*p=Top;
    for(int i=1;p&&i<index;i++)
    {
        p=p->next;
    }
    if(p)
    return p->data;
    else
    return -1;
}
int stackTop()
{
    /*if(Top)
    return (Top->data);
    else return -1;
    */
   return Top?Top->data:-1;
}
int isEmpty()
{
    return Top?0:1;//0not empty
}
int isFull()//vvmi creat a new node if it is unbale to create then stack and heap mem is full
{   Node*t=new Node;
    return t?1:0;//1not full;
    delete t;
}
int isBalenced(char *exp)
{
    int i;
    for( i=0;exp[i];i++)
    {
        if(exp[i]=='(')
        Push(exp[i]);
        else if((exp[i]==')'))
        {if(Top==NULL||Top->data!='(')
        {return 0;}// stack is empty;
          Pop();
        }
        else if(exp[i]=='{')
        Push(exp[i]);
        else if((exp[i]=='}'))
        {if(Top==NULL||(Top->data!='{'))
        {return 0;}// stack is empty;
        Pop();
        }
        else if(exp[i]=='[')
        Push(exp[i]);
        else if((exp[i]==']'))
        {if(Top==NULL||(Top->data!='['))
        {return 0;}// stack is empty;
        Pop();
       }

    } if(Top==NULL)
        return 1;//par mathces
        else return 0;
}
int main()
{
    char str[]="{([a+b]*[(c-d)])[]}";
    if(isBalenced(str))
    cout<<"\nYes It is balanced";
    else
    cout<<"\n It is not balanced";
}
