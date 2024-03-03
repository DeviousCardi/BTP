#include <stdio.h>
int main() {
    int m,n;
    scanf("%d\n%d",&m,&n);
    int a[n],i1,i2;
    for(i1=0;i1<n;i1++) {
        scanf("%d",&a[i1]); }
    for(i1=0;i1<(n-1);i1++) {
        for(i2=1;i2<n;i2++) {
            if((a[i1]+a[i2])%m==0) {
                printf("lucky"); } } }
    return 0; }