// jsg cats dogs
#include<iostream>
using namespace std;
 int main()
{
    long long int t,c,d,l;
    cin>>t;
    while(t--)
    {
        cin>>c>>d>>l;
        if(l%4==0)
        {
            if(l==4*(c+d)){cout<<"yes\n";}
            else if((l==4*d)&&(c<=d)){cout<<"yes\n";}
            else if((c==2*d)&&(l==4*d)){cout<<"yes\n";}
                  else
                    cout<<"no\n";
        }
        else
            cout<<"no\n";
    }
}
