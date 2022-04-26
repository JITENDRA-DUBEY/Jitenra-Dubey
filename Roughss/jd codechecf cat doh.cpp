// jsg cats dogs
#include<iostream>
using namespace std;
int main()
{
    int t,c,d,l;
    cin>>t;
    while(t--)
    {
        cin>>c>>d>>l;
        // if theier is no dog than all cats are on road
        if((d==0)&&(l==4*c)){cout<<"yes\n";}
         else {

            if(l==4*(c+d)){cout<<"yes\n";}
            else
                { // some dogs carry cats some not
                if((l==4*d)&&(0<=c||c<=2*d)){cout<<"yes\n";}
                  else
              cout<<"no\n";
            }
        }

    }
}

