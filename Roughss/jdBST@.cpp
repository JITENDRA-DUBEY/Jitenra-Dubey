// jsg
#include<iostream>
using namespace std;
class node{
    public:
node* lchild;
int data;
node *rchild;
public:
node(){
    lchild=rchild=NULL;}

};
node *root=NULL;
class BST{
    public:
void Icreate(int);
void inorder(node*);
node* search(node*,int);
node* Isearch(node*,int);
node* Rcreate(node*,int);
node* Delete(node*,int);
int Height(node*);
node* InOrderPre(node*);
node* InOrderSucc(node*);
};
// jsg
node* BST::Rcreate(node*p,int data)//insertion always done at leaf node that is when p is null
{
    node*t;
    if(p==NULL)// that is there is no node so insertionm happining at root node
    {
        t= new node();
        t->data=data;
        if(root==NULL)//this step for assign the address in root node
        root =t;
        return t;
    }
    if(p->data==data) return NULL;// not inserting a duplicate element
    if(data<p->data)
    {
        p->lchild=Rcreate(p->lchild,data);
    }
    else if(data>p->data)
    {
         p->rchild=Rcreate(p->rchild,data);
    }
}
void BST::inorder(node *p){
    if(p){
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
    }
}
void BST::Icreate(int data)
{
    node*p,*r=NULL,*t;
    t=new node();
    t->data=data;
    if(root==NULL)// there is no node
     {
       root=t; return;
     }
     p=root;
     while(p!=NULL)// for foinding leadf node r is taling pointer
     {
         r=p;
         if(data==p->data) return ;//for dublicate ele;
          if(data<p->data)
        {
        p=p->lchild;
        }
    else if(data>p->data)
         {
           p=p->rchild;
        }
     }
     if(data<r->data)
     r->lchild=t;
     else
     r->rchild=t;
}
int main(){
    node *p;
    int x;
  BST t;
   t.Rcreate(root,3);
   t.Rcreate(root,5);
   t.Rcreate(root,6);
   t.Rcreate(root,3);
   t.Rcreate(root,4);
   cout<<"\nInoreder Traversal : "<<endl;
   t.inorder(root);
     //t.Delete(root,2);
      cout<<"\nInoreder Traversal : "<<endl;
    t.inorder(root);
     t.Icreate(3);
   t.Icreate(5);
   t.Icreate(6);
   t.Icreate(3);
   t.Icreate(9);
   cout<<"\nInoreder Traversal : "<<endl;
   t.inorder(root);
     //t.Delete(root,2);
      cout<<"\nInoreder Traversal : "<<endl;
    t.inorder(root);

}
