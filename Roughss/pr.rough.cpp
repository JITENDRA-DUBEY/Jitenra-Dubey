#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node*p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        if(p->next);
    }
}
 struct Node* push(Node* head,int data)
{
    Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        Node*temp1=head;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            temp1->next=temp;
        }
        return head;
    }
}

int main()
{
struct Node*head=NULL;
push(head,2);
push(head,5);
push(head,4);
push(head,6);
push(head,7);
print(head);

}
