#include <stdio.h>
int main() {
    int n,a[200],x[200],i,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
            scanf(" %d",&a[i]); }
    x[0]=1;
    for(i=0;i<50;i++) {
           t=x[i];
           x[i+1]=a[t]; }
     printf("%d",x[3]);
    return 0; }