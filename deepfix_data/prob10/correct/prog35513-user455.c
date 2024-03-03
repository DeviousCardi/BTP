#include<stdio.h>
int main() {
    int n,d=0,i,j,t=0;
    scanf("%d\n",&n);
    int c[n];
    for(i=0;i<n;i++)
    {scanf("%d",&c[i]);}
    for(i=0;i<n;i++) {
     for(j=i+1;j<n;j++) {
         if(c[j]>c[i])
         d=d+1; }
     if(d>t) {
        t=d;
        d=0; }
     else
        d=0; }
    printf("%d",t+1);
    return 0; }