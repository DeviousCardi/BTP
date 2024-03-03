#include <stdio.h>
int main(){
    int a[100],n,b[100],i,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    scanf("%d",&b[i]); }
    for(i=0;i<n;i++)
    { c[b[i]]=a[i]; }
    for(i=0;i<n;i++)
    { printf("%d ",c[i]); }
    printf("end");
    return 0; }