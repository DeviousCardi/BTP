#include <stdio.h>
int main() {
    int n,i1,k=0,i2;
    scanf("%d",&n);
    int m=2*n;
    int a[m],b[n];
    for(i1=0;i1<m;i1++) {
        scanf("%d",&a[i1]); }
    for(i1=0;i1<=(m-2);i1++) {
        for(i2=i1+1;i2<=(m-1);i2++) {
            if(a[i1]==a[i2]) {
                b[k]=i2-i1;
                printf("%d %d",i2,i1);
                k++; }
            break; } }
    int min=999;
    for(k=0;k<n;k++) {
        if(b[k]<=min) {
            min=b[k]; } }
    printf("%d",min);
    return 0; }