#include<stdio.h>
int main() {
    int n,i,j,max=0,c=0,d;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    for(i=0;i<=n-1;i++) {
        d=i;
        for(j=i+1;j<=n-1;j++) {
            if(ar[j]>ar[d]) {
            d=j;
            c++; } }
        if(c>max) {
            max=c;
            c=0; } }
    printf("%d",max+1);
    return 0; }