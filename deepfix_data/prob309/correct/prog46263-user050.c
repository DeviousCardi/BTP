#include <stdio.h>
int fact(int n) {
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact*=i; }
    return fact; }
int main() {
    int n,x;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        if(i%2==0) {
            N[i/2]=x; }
        printf("%d",N[i/2]); }
    return 0; }