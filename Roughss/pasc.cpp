#include<iostream>
using namespace std;
long int ncr(int n,int i)
        {
            long int num=1,den=1,k=1;
            k=i;
            for(k=n;k>=i;k--)
            {
                num=num*k;
            }
            for(k=1;k<=(n-i);k++)
            {
                den=den*i;
            }
            return num/den;
        }
        int main()
        {
            cout<<ncr(5,2);
        }
