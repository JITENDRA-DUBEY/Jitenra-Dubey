#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<string>
#include <bits/stdc++.h>
   string reverseVowels(string s) {
        int n=s.size(),i=0,j=n-1;
        while(i<j&&i<n&&j>=0)
        {
            while(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='0')
            {
                i++;
            }
           while(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'&&s[j]!='0')
            {
                j--;
            }
            if(i<j)
                swap(s[i],s[j]);
        }

     return s;     }
int main(){
   string s1="hello";
  // string s2="011";
   string m= reverseVowels(s1) ;
 cout<<m;
}
