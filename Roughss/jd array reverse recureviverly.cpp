// jsg
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;
int i=0;
void  Reccrv(int a[],int n)
{
    if(i<n/2)
    {
        swap(a[i],a[n-1-i]);
        i++;
        Reccrv(a,n);
    }

}
int main()
{
    int a[6]={1,2,3,4,5,6};
    for(int j=0;j<6;j++)
    {
        cout<<a[j]<<"\t";
    }
    Reccrv(a,6);
    cout<<"\n";
    for(int j=0;j<6;j++)
    {
        cout<<a[j]<<"\t";
    }
}
