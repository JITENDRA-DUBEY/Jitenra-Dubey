// jsg
#include<stdio.h>
int main()
{
    int n;
    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }
}
