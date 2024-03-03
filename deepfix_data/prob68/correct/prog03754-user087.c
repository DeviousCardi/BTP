#include<stdio.h>
 int a[100];
 long long int product(int i) {
    if(i==0)
    return a[0];
    else
    return a[i]*product(i-1); }
int main() {
    int n;int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    long long int r=product(n-1);
   printf("%lld",r);
    return 0; }