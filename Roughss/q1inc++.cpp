// jsg dynamci array in heap by using mallaoc;
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    printf("plzz enter the size of array\n");
    //scanf("%d",&n);
    cin>>n;
    int i,*p;
    //p=(int*)malloc(n*sizeof(int));
    p = new int [n*sizeof(int)];
    for(i=0;i<n;i++)
    {
       cin>>p[i];
    }
   for(i=0;i<n;i++)
   {
      cout<<p[i];
   }
   delete []p;// for releasing the whole meemory inside heap occupied by array
   cout<<"\n"<<p;
   p=NULL;// so that p not became dangling pointer;
   cout<<"\n"<<p;
}
