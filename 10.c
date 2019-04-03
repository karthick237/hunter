#include<stdio.h>
int main()
{
   int m,n,a[100],b[100],i,j,c=0;
   scanf("%d   %d",&m,&n);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   for(j=0;j<n;j++)
   {
    scanf("%d",&b[j]);
   }
    for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   {
      if(a[i]==b[j])
     c++; 
   }
   }
   if(c==n)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
    return 0;
}
