#include <stdio.h>
int main() {
int  n,i;
int c[400],a[400];
scanf("%d",&n);
for(i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
for(i=0;i<2*n;i++) {
        putchar(c[i]); }
    return 0; }