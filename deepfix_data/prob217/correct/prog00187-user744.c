#include<stdio.h>
#include<math.h>
int main() {
    int i,j,n,s;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&s);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (s==a[i]+a[j]) {
                printf("(%d,%d)",a[i],a[j]); } } }
    return 0; }