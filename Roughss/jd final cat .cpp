// jsg cats dogs
#include<iostream>
using namespace std;
int main()
{
    int t,c,d,l,mx,mn;
    cin>>t;
    while(t--)
    {
        cin>>c>>d>>l;

        mx=4*(c+d);
    // if 2*c>d that means some cats lies on road so
       if(c>2*d)
       {
           mn=4*(d+(c-2*d));
       }
       else
        {mn=4*d;}

            if(l>=mn&&l<=mx){cout<<"yes\n";}
            else
                {
              cout<<"no\n";
            }


    }
}

