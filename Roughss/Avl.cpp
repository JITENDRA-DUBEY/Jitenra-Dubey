/*JSG logic same as we insert in BST while inserting anew node we have to take care
about balence factor(-1,0,+1) and at (-2,2) it is imbale so we have balence it by using
rotations*/
// first lets creat a BST using recurrsion
#include<iostream>
#include<conio.h>
using namespace std;
//int NodeHeight(Node*p);
class Node//Node of Avl tree
{
    public:
   Node*lchild;
   int data;int height;
   Node*rchild;
   Node(){lchild=rchild=NULL;}
};Node*root=NULL;
class Avl
{
    public:
   // Node*root;
   // Avl(){root=NULL;}
    Node* insert(Node*p,int data);
    Node* inorder(Node*p);
    //int NodeHeight(Node*p);
    //int balFactor(Node*p);
    //Node*LLRotation(Node*p);
   // Node*LRRotation(Node*p);
};
int NodeHeight(Node*p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}
int balFactor(Node*p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl-hr;
}
Node* LLRotation(Node*p)
{
    Node*pl=p->lchild;
    Node*plr=pl->rchild;//p->lchlils->rchild;
    // here we have to update 2 links
    pl->rchild=p;
    p->lchild=plr;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    if(root==p)
    root=pl;//pl became root node
    return pl;
}
Node* LRRotation(Node*p)
{
    Node*pl=p->lchild,*plr=pl->rchild;//p->lchlils->rchild;
    // here we have to update 2 links
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
     plr->height=NodeHeight(plr);
    if(root==p)
    root=plr;//plr became root node
    return plr;
}


Node* Avl::insert(Node*p,int data)// insertion always done at leaf node
{
  Node*t=NULL;
  if(p==NULL)
  {
      t=new Node();
      t->data=data;
      t->height=1;//when we insert a node than assign height 1 ;
      if(root==NULL)
      {root=t;}
      //p=t;
      return t;
  }
   if(data<p->data)
     p->lchild= insert(p->lchild,data);
     else if(data>p->data)// this condtion execute when we insert pre inserted data(dup)
       p->rchild= insert(p->rchild,data);
       //here we have to update our Bst code for Avl tree;
       p->height=NodeHeight(p);
        if(balFactor(p)==2&&balFactor(p->lchild)==1)
           return LLRotation(p);
        else if(balFactor(p)==2&&balFactor(p->lchild)==-1)
              return LRRotation(p);
       return p;
}
Node* Avl::inorder(Node*p)
{
    if(p!=NULL)
    {


        inorder(p->lchild);
         cout<<p->data <<" ";
        inorder(p->rchild);
    }
}
int main()
{
     Avl b;
    b.inorder(root);
    //b.insert(b.root,10);  b.insert(b.root,40); b.insert(b.root,20); b.insert(b.root,80); b.insert(b.root,30); b.insert(b.root,70);
     b.insert(root,10);b.insert(root,5);b.insert(root,2);
    cout<<"Preorder  Traversal : "<<endl;
     b.inorder(root);

}
