#include<stdio.h>
int sum (int n, int q[n], int b, int m) {
    if (n>0) {
       if (b==1) {
           m=m+q[n-1];b++;
           return sum (n-1, q, b, m); }
       else if (b>1) {
           m=m-q[n-1];b++;
           return sum (n-1, q, b, m); } }
    else if (n==0)
    return m; }
int main() {
    int i,c,n,b=1,m=0;
    scanf("%d\n",&n);
    int a[n],q[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
        q[n-1-i]=a[i]; }
    c= sum(n,q,b,m);
    printf("%d",c);
    return 0; }