#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a[],int n);
int main()
{
int n;
  cin>>n;
    int a[n]={1,2,3,4,5};
    cout<<sum(a,n);
}
int sum(int a[],int n)
{
    if(n==0)
        return 0;
    else
        return sum(a,n-1)+a[n-1];
}
