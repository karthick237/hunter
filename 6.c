#include<stdio.h>
int main()
{
   int n,a[100],b[100],i,j,c=0,l,t;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
   if(a[i]==a[j])
   {
       b[c]=j;
       c++;
       }
   }
   }
   for(i=0;i<c;i++)
   {
       for(j=i+1;j<c;j++)
       {
   if(b[i]>b[j])
   {
       t=b[i];
       b[i]=b[j];
       b[j]=t;
   }
       }
   }
   l=b[0];
   printf("%d",a[l]);
    return 0;
} 
