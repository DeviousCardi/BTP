#include <stdio.h>
int main()
{ int m,n,l;
scanf("%d %d",&n,&m);
int S[50];
int j,max;
for(int i=0;i<n;i++)
{ S[i]=0;
for(j=0;j<m;j++)
{ scanf("%d",&l);
S[i]=S[i]+l; }
max=S[0];
for(i=0;i<n;i++)
{ if(max<S[i])
max=S[i]; }
printf("%d",max);
    return 0; }