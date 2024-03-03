#include <stdio.h>
int main(){int i,j,n,a[9999],b,c,k;
scanf("%d",&n);
for(j=0;j<n;j++)
{scanf("%d",&a[j]);}
    for(i=0;i<n;i++){
        c=n-i;
    for(b=i;b<c;b++)
   { if(a[i]>a[b])
   k=a[i];
    a[i]=a[b];
       a[b]=k;
   }}
    for(j=0;j<n;j++){
        printf("%d ",a[j]); }
    printf("end");
    return 0; }