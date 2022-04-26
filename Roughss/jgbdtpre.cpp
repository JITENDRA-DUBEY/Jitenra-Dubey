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
    public :
    int top;
    int sz;
    Node**S;
    Stack(int siz)
    {
     top=-1;sz=siz;
    S=new Node*[siz];
    }
    //void create(int siz);
    void push(Node* data);
    Node* Pop();
    Node*topOfstack();
    void display();
};
Node* Stack::topOfstack()
{
    if(top==-1)
    return NULL;
    else
    return S[top];
}
void Stack::push(Node*data)
{
    if(top==sz-1)
    cout<<"stack overflow "<<endl;
    else{
        top=top+1;
        S[top]=data;
    }
}
void Stack :: display()
{
    if(top==-1)
    cout<<"stack is empty "<<endl;
    else{
    int i=top;
    while(i>=0)
    {
        cout<<S[i]<<"\n";i--;
    }
    cout<<"\n";
}
}
Node* Stack::Pop()
{
    Node* x=NULL;
    if(top==-1)
    cout<<"stack underflow"<<endl;
    else{
       x=S[top];
       top=top-1;
    }
    return x;
}
class Bst
{    public :
    Node*root;
    Bst(){root=NULL;}
    void create(int a[],int n);
    void preorder(Node*p);
};
void Bst::create(int pre[],int n)
{//if p->data<data logic before inseryion lchild first pushg p in to stack than creat lchild of p
  //if(p->data<data&&data<topstack data than assing p->rchild =t and don't need to push data else p=popo();)
     Node*t=NULL,*p;
     Stack st(n);int i=0;
     //if(n==0) return ;//array is empty;
      st.display();
     root= new Node();
     root->data=pre[i++];
     p=root;

     while(i<n)
     {
        if(pre[i]<p->data)
        {
            t=new Node();
            t->data=pre[i++];
            p->lchild=t;
            st.push(p);
            p=t;

        }
        else if(pre[i]>p->data&&((pre[i]<(st.topOfstack()->data))||(st.topOfstack()==NULL)))
        {
             t=new Node();
             t->data=pre[i++];
            p->rchild=t;
            p=t;
        }
        else
        { st.display();
           p=st.Pop();}
        }


}
void Bst::preorder(Node*p)
{

    if(p!=NULL){

        preorder(p->lchild);
         cout<<p->data<<" ";
        preorder(p->rchild);
    }
}
int main()
{
    Bst b;
    int a[6]={2,5,4,3,7,6};
    b.create(a,6);
    cout<<"Preoredr value : "<<endl;
    b.preorder(b.root);
    /*int i=0;
    while(i++<4)
    {st.push(new Node());}
    cout<<"\nstack value : "<<endl;
    st.display();
    cout<<"Stack poped our value :"<< st.Pop()<<endl;
    cout<<"Stack poped our value :"<< st.Pop()<<endl;
    cout<<"Stack poped our value :"<< st.Pop()<<endl;/*/

}
