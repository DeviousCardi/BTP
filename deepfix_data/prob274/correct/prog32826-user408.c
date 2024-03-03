#include <stdio.h>
int main() {
    int n,a[200],x[200],i,m=0,w=0,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
            scanf(" %d",&a[i]); }
    x[0]=1;
    for(i=0;i<50;i++) {
           t=x[i];
           x[i+1]=a[t-1]; }
    for(i=0;i<50;i++) {
           t=x[i];
           for(j=i+1;j<50;j++) {
                 if(x[j]==t)
                 break; }
           m=j;
           w=i;
           if(m!=0)
             break; }
    printf("%d  %d",m,m-w);
     return 0; }