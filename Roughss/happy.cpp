#include<iostream>
using namespace std;
class Hashe{
    public:
    struct node{
        int data;
        node *next;
        node(){
            next=NULL;
        }
    };
    public:
    node *H[10];
    Hashe(){
        for(int i=0;i<10;i++)
        H[i]=NULL;
    }
    void InsertSortedOrder(int key);
    node* SearchING(int);
};
void Hashe::InsertSortedOrder(int key){
    int index=key%10;
    node *t,*q=NULL;
    node *p=H[index];
    t=new node();
    t->data=key;
    if(H[index]==NULL)
    H[index]=t;
    while(p && p->data<key){
        q=p;
        p=p->next;
    }
    if(p==H[index]){
        t->next=H[index];
        H[index]=t;
    }
    else{
        t->next=q->next;
        q->next=t;

    }
}
 Hashe::node* Hashe::SearchING(int key){ // imp point class k andar hota 
return NULL;
}