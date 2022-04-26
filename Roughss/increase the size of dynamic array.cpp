// jsg increase the size of dynamic array;
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p,*q,i=0;
    p=new int [5*sizeof(int)];//a dynamic array creat inside heap
    for(i=0;i<5;i++)
      p[i]=i;
    // now we want to store more element
    q=new int [10*sizeof(int)];
    // copy the p array element in q;
    for(i=0;i<5;i++)
        q[i]=p[i];
    // after that we have to free meemory pointed by p and assing the addr
    // of q in p than assing null into q;
    delete []p;
    p=q;
    q=NULL;
    for(i=0;i<10;i++)
        cout<<p[i]<<"\t";
    delete []p;
    cout<<"\n"<<p;
    p=NULL;
 cout<<"\n"<<p;
}
