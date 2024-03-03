#include <stdio.h>
int main()
{int n,m,s=0,k=0,i,a[100],b[100];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++) {
scanf("%d",&a[i]);
s=s+a[i]; }
for(i=0;i<m;i++) {
scanf("%d",&b[i]);
k=k+b[i]; }
printf("%d",k);
printf("%d",s);
    return 0; }