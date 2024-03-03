#include <stdio.h>
int main(){
    int n,i,j,x;
    int a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        scanf("%d",&x);
        b[x]=a[j]; }
    for(x=0;x<n;x++)
    printf("%d \t",b[x]);
    printf("end");
    return 0; }