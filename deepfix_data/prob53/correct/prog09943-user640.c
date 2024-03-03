#include<stdio.h>
int sum (int n, int a[n], int b) {
    int m=0;
    if (n>0) {
       if (b==1) {
           m=m+a[n];b++;
           return sum (n-1, a, b); }
       else if (b>1) {
           m=m-a[n];b++;
           return sum (n-1, a, b); } }
    else if (n==0)
    return m; }
int main() {
    int i,c,n,b=1;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        printf("#%d#",a[i]); }
    c= sum(n,a,b);
    printf("%d",c);
    return 0; }