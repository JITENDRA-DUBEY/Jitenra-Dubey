// jsg stack impletation by using array;
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Stack
{
    int Size;
    int Top;
    char *S;
};
void Create(Stack*st)
{
    cout<<"\nEnter the size of stack";
    cin>>st->Size;
    st->Top=-1;
    st->S=new char[st->Size-1];
}
void Push(Stack*st,char x)
{
    if(st->Top==st->Size-1)
    cout<<"\nOverFlow";//stack is already full;
    else
    {
        st->S[++(st->Top)]=x;
    }
}
char Pop(Stack*st)
{   char x='z';//z when stack is empty;
    if(st->Top==-1)
    cout<<"\nUnderFlow";//stack is already Empty;
    else
    {
        x=st->S[(st->Top)--];
    }
    return x;

}
int Stack_Top(Stack st)
{
    if(st.Top==-1)
    return -1;
    else
    return st.S[st.Top];
}
int Peek(Stack st,int index)
{   int x=-1;
    if(st.Top-index+1<0||index==0)
    cout<<"\nInvalid Position";
    else
     {x= st.S[st.Top-index+1];}
     return x;
}
void Display(Stack*st)
{
    cout<<"\nYour Stack Elemenet\n";
    for(int i=st->Size-1;i>=0;i--)
    {
        cout<<st->S[i]<<"\n";
    }
}
int isEmpty(Stack st)
{
    if(st.Top==-1)
    return 1;
    else
    return 0;
}
int isFull(Stack st)
{
    if(st.Top==st.Size-1)
    return 1;
    else
    return 0;
}
char  isBalence(Stack st,char *exp)
{

      Create(&st);
     for(int i=0;exp[i];i++)
     {
         if(exp[i]=='(')
         Push(&st,exp[i]);
         else if(exp[i]==')')
         {
             //if(!isEmpty(st))
             Pop(&st);
         }
     }
     if(st.Top==-1)
     return 'y';
     else
     return'n';
}
int main()
{
    struct Stack st;
    char str[]="((a+b)*(c-d))";
    cout<<"\nMatching : "<<isBalence(st,str);
    return 0;
}
