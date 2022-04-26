#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void Reverse(int b[],int n)
{
	int temp,i,j;
	for(i=0;i<n/2;i++)
	{
		temp=b[i];
		b[i]=b[n-1-i];
		b[n-1-i]=temp;
	}
}
int main()
{
    int x=10;
    int y=20;
    swap(&x,&y);
    cout<<x<<y;
    int a[4]={10,20,30,40};
    Reverse(a,4);
    for(int i=0;i<4;i++)
    {
    	cout<<a[i];
	}

}
