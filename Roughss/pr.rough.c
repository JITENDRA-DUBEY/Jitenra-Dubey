#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node*head=NULL,*last=NULL;

void print(struct Node*p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        print(p->next);
    }
}
 push(int x)
{
   struct Node*t=(struct Node*)malloc(sizeof(struct Node));
   t->data=x;
   t->next=NULL;
   if(head==NULL)
   {
       head=t;
       last=t;
   }
   else
   {
    last->next=t;
    last=t;
   }
}

int main()
{
//struct Node*head=NULL;
push(2);
push(5);
push(4);
push(6);
push(7);
print(head);

}
