#include <stdio.h>

int main()
{
   int n,a[100],i,j,t,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
   if(a[i]==a[j])
   {
       c++;
    }
   }
   if(c==1)
       {
   printf("%d ",a[i]);
       }
       c=0;
   }
    return 0;
}
