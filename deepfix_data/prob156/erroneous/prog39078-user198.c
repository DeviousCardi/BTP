#include <stdio.h>
int main()
{int n,m,s=0,k=0,max,i,a[100],b[100];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{for(j=0,s=0;j<m;j++) {
scanf("%d",&a[i]);
s=s+a[i]; }
b[i]=s; }
max=b[0];
for(i=0;i<n;i++)
{if(b[i]>max)
max=s[i]; }
printf("%d",max);
else
printf("%d",s);
    return 0; }