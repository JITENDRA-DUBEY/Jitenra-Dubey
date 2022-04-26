#include<iostream>
using namespace std;
long int ncr(int n,int i)
         {
            long int num=1,den=1,k=1;
            k=i;
            for(k=i;k>=1&&n>0;k--)
            {
                num=num*n;n--;
                
            }
            //cout<<"\n Num value : "<<num;
            for(k=i;k>=1;k--)
            {
                den=den*k;
            }
            //cout<<"\ndem = "<<den;
            return num/den;
        }
        int main()
        {
        	cout<<"\n ncr value : "<<ncr(5,0);
        	cout<<"\n";
        	cout<<"\n ncr value : "<<ncr(5,1);cout<<"\n";
        	cout<<"\n ncr value : "<<ncr(5,2);cout<<"\n";
        	cout<<"\n ncr value : "<<ncr(5,3);cout<<"\n";
            cout<<"\n ncr value : "<<ncr(5,4);cout<<"\n";
            cout<<"\n ncr value : "<<ncr(5,5);
        }
