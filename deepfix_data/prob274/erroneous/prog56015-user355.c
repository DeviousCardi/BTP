#include <stdio.h>
int main(){int i,c,j,n,k[100],p,e,t=0,b[100],a[1000];
scanf("%i",&n);
for(i=0;i<n;++i)
scanf("%i",&b[i]);
a[0]=1;a[1]=b[0];
for(c=2;c<100;++c)
a[c]=b[a[c-1]-1];
for(i=0;i<99;++i)
{for(j=i+1;j<100;++j)
if(a[i]==a[j]){k[t]=j;++t;}}
for(j=1;j<t;++j)
if(k[0]>k[j]){p=k[0];k[0]=k[j];k[j]=p;}}
e=a[k[0]];
for(i=0;i<100;++i)
if(a[i]==e)break;
printf("%i %i",k[0],k[0]-i);
return 0;}