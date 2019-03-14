#include <stdio.h>

void main()
{
int n,i,j,a[100],c=0,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    for(k=j+1;k<n;k++)
    {
if(a[i]+a[j]==a[k])
{
c=1;
if(c!=0)
{
    printf("%d %d %d\n",a[i],a[j],a[k]);
break;
}
}
}
}
}
    return 0;
}
