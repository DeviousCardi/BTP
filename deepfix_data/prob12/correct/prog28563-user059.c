#include <stdio.h>
int main() {
    int n,a[200],i,j,c,d=100;
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n;j++) {
            if(a[i]==n && a[j]==n)
            c=j-i;
            if(d>c)
            d=c; } }
    printf("%d",d);
    return 0; }