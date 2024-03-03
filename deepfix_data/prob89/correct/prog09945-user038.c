#include <stdio.h>
int main() {
    int m,n;
    scanf("%d\n%d",&m,&n);
    int a[n],i1,i2,i3;
    for(i1=0;i1<n;i1++) {
        scanf("%d",&a[i1]); }
    for(i1=0;i1<(n-1);i1++) {
        for(i2=1;i2<n;i2++) {
            if((a[i1]+a[i2])==m) {
                i3=0; } } }
    if(i3==0) {
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }