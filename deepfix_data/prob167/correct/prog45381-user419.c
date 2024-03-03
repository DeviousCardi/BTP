#include<stdio.h>
int add(int n);
int main() {
    int N,a[10^5];
    scanf("%d",&N);
    scanf("%d",a);
    printf("%d",add(a));
    return 0; }
int add(int i) {
    int a[10^5],sum;
    sum=a[i]+add(a[i+1]);
    return (sum); }