#include<stdio.h>
int main()
{
   int m,a[100],b[100],i,j,s=1;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   
    for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
   {
         s=a[i]*s;
         b[i]=s/a[i];
     }
   }
   for(i=0;i<m;i++)
   {
  printf("%d ",b[i]);
  }
  return 0;
}
