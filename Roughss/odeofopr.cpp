#include<iostream>
using namespace std;
long int ncr(int n,int i)
        {
            long int num=1,den=1,k=1;
            k=i;
            for(k=1;k<=i&&n>0;k++)
            {
                num=num*n;
                n--;
            }
            cout<<"\nNum : "<<num;
            for(k=i;k>=1;k--)
            {
                den=den*k;
            }
            cout<<"\ndem = "<<den<<"\n";
            return num/den;
        }
        int main()
        {
            cout<<"\nYour ans : "<<ncr(5,5);
        }
