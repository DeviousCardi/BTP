#include <stdio.h>
int main(){
    int n,j,k;
    scanf("%d",&n);
    int a[n],c[100];
    for(int i=0;i<=99;i++) {
        c[i]=0; }
    for(int i=0;i<=n-1;i++) {
        scanf("%d",&a[i]);
        c[a[i]]++; }
    for(j=0;j<=99;j++) {
        for(k=1;k<=c[j];k++) {
            printf("%d ",j); } }
    printf("end");
    return 0; }