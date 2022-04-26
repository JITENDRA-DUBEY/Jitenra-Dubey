// jdf BST
#include<iostream>
#include<conio.h>
using namespace std;
class Bst
{
    public: Bst*lchild; int data; Bst*rchild;
    Bst(){lchild=rchild=NULL;}
    int insert(int data);
    void search(int key);
    void inorder(Bst *t);

};Bst*root=NULL;
int Bst::insert(int data)
{
    Bst *t,*p,*r=NULL;// r is tailing pointer
    t=new Bst();
    t->data=data;
    if(root==NULL)// this is first node;
    {
         root=t; return 0;
    }

    else{
            p=root;
    while(p!=NULL)
    {
         r=p;
         //if(data == p->data)// duplicate element not insert
         //return ;
         if(data<p->data)
         {
             p=p->lchild;
         }
         else if(data>p->data)
         {
           p=p->rchild;
         }
    }
    }
       if(data>p->data)
       p->rchild=t;
       else
       p->lchild=t;
}
void Bst :: inorder(Bst* t)
{
    if(t!=NULL)
    {
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
    }
}
int main()
{
    Bst b;int i=1;
    while(i++<=5)
    {
     b.insert(10*i);
    }
    cout<<"Inorder traversal value :: "<<endl;
    //b.inorder(b.root);
}
