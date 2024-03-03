#include <stdio.h>
int max(int, int);
int main() {
 int m,n;
 int d=0;
 scanf("%d %d",&n,&m);
 for(int i=0;i<n;i=++)
 {  int sum=0;
     for(int j=0;j<m;j++) {
         int a;
         scanf("%d",&a);
         sum=sum+a; }
     d=max(d,sum);
 }printf("%d",d);
    return 0; }
int max(a,b) {
    c=(a>b?a:b);
    return c; }