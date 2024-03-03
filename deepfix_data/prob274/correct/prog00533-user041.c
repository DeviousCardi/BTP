#include <stdio.h>
int main() {
   int n,i,t,j,k;
    scanf("%d",&n);
    int r[n],c[n];
    for(i=0;i<n;i++)
     scanf("%d",&r[i]);
     c[0]=1;
     for(i=1;i<n;i++) {
        c[i]=r[c[i]-1]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(c[i]==c[j]) {
                t=i;
                k=j-i; } } }
    printf("%d %d",t,k);
    return 0; }