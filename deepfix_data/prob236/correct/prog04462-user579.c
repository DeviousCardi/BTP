#include <stdio.h>
int main(){
int c[100],k,j,n,i,l,b[100],a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
scanf("%d",&b[j]);
for(k=0;k<n;k++)
c[b[i]]=a[i];
for(l=0;l<n;l++)
printf("%d ",c[l]);
printf("end");
    return 0; }