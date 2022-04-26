// jsg Binary search
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//int key=37;
void bc(int a[],int h,int m,int l,int key)
{
    if(l>h){cout<<"\nNO such element found";exit(1);}
    if(a[m]==key){cout<<"\nYES";exit(1);}
    if(a[m]>key)// element present on ryt hand so updte l by m+1
    {
        h=m-1;
        m=floor((l+h)/2);
        bc(a,h,m,l,key);
    }
    else// element present on ryt hand so updte l by m+1
    {
        l=m+1;
        m=floor((l+h)/2);
        bc(a,h,m,l,key);
    }
}
int main()
{
    int a[]={4,8,10,15,18,21,24,27,29,33,34,37,39,41,43};
      int h=14,l=0,m=7,key;
      cout<<"plzz enter the key eleme";
      cin>>key;
       bc(a,h,m,l,key);

}
