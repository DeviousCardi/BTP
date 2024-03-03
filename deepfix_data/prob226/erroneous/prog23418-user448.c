#include <stdio.h>
#include <math.h>
int main() {
    int i,d,n;sum;
    sum=0;
    scanf("%d%d",&d,&n);
    int b[d+1],a[n+1];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    if(n<=d-1) {
        a[n]=b[n]; }
    for(i=0;i<d;i++) {
    sum=sum+b[i]; }
    a[d]=sum;
    a[n]=pow(2,n-d)*a[d];
    return 0; }