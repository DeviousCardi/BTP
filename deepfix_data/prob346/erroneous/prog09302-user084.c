#include <stdio.h>
int main(){int i,j,n,a[9999],b,c;
scanf("%d",&n);
for(j=0;j<n;j++)
{scanf("%d",&a[j]);}
    for(i=0;i<n;i++){
    for(b=1;b<n;b++)
   { if(a[i]>a[b])
    a[i]=a[b];}}}
    for(j=0;j<n;j++){
        printf("%d ",a[j]); }
    printf("end");
    return 0; }