#include<stdio.h>
int sum (int n, int a[]) {
    int m=0,b=1;
    if (n>1) {
       if (b==1) {
           m=m+a[n];b++;
           return sum (n-1, a); }
       else if (b>1) {
           m=m-a[n];b++;
           return sum (n-1, a); } }
    if (n==0)
    return m; }
int main() {
    int i,c,n;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        printf("#%d#",a[i]); }
    c= sum(n,a);
    printf("%d",c);
    return 0; }