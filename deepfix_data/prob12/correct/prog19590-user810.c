#include <stdio.h>
int main() {
int  n,i;
int c[400];
int  a[400];
scanf("%d",&n);
for(i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
for(i=0;i<2*n;i++) {
        printf("%d",c[i]); }
    return 0; }