//jsg
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j;
    vector<vector<int> >mat;
    for(int i=0;i<3;i++)
    {
        vector<int>temp;// this is temp array vector
        for(j=0;j<3;j++)
        {
            mat[i][j]=i;
        }
        mat.push_back(temp);//assigning the oned vector in 2d array
    }
// display()
     for(int i=0;i<3;i++)
    {
       cout<<"\njd";
        for(j=0;j<mat[i].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
       cout<<"\n";
    }
}
