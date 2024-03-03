#include <stdio.h>
int main() {
    int n,a[10001],b[100],i,j,p,t;
    scanf("%d",&n);
    for(j=0;j<100;j++) {
        b[j]=0; }
    for(i=1;i<=n;i++) {
        scanf("%d",a[i]);
        p=a[i];
        b[p]=b[p]+1; }
    for(j=0;j<100;j++) {
        for(t=0;t<b[j];t++) {
            printf("%d ",j); } }
    printf("end");
    return 0; }