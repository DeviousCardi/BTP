#include<stdio.h>
int main() {
    int n,i,j,m=0;
    scanf("%d",&n);
    int a[n],Max[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
        for(i=0) {
            for(j=1;j<n;j++) {
                if(a[i]<a[j]) {
                    m++; } } }
        printf("%d",m);
    return 0; }