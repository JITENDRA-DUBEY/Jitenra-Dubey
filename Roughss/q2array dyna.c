// jsg dynamci array in heap by using mallaoc;
#include<stdio.h>
int main()
{
    int n;
    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int i,*p;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        //scanf("%d",&p[i]);
        scanf("%d",(p+i));
    }
   for(i=0;i<n;i++)
   {
       //printf("%d\n",p[i]);
       printf("%d\n",*(p+i));
   }
   free(p);// release the heap memory which is pointed by p;
   p=NULL;// so that does not remain null pointer
}
