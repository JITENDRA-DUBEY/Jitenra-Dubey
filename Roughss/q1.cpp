// jsg
#include<iostream>
#include<conio.h>
using namespace std;
double per(double n,double r)
{
    static double s=0;
   static int i=0; i++;
    if(r==0||r==n)return 1;
    if(r==1)return n;
    if(n>r)
    {
        s+= (n/i)*per(n-1,r);
    }
    return s;
}
int main()
{
    double l;
    l=per(7.0d,2.0d);
    cout<<"\n value : "<<l;

}
