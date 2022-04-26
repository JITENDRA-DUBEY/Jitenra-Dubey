#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v1;//blank vector cap==0
  cout<<v1.capacity<<endl;
  cout<<v1.size()<<endl;
  vector<int> v2={10,20,30,40,89};
  cout<<v2.capacity<<endl;
   cout<<v2.size()<<endl;


}
