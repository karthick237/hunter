#include <stdio.h>

void main()
{
int n,i,j,a[100],c=0,k=0;
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
c=1;
k++;
if(c!=0)
{
printf("%d ",a[i]);
break;
}
}
}
}
if(k=1)
{
    printf("UNIQ");
}
 return 0;
}
