#include<stdio.h>
int add(int n);
int main() {
    int N,a[100000],sum;
    scanf("%d",&N);
    scanf("%d",a);
    sum=add(a[N]);
    printf("%d",sum);
    return 0; }
int add(int i) {
    int a[10^5],sum;
    sum=a[i]+add(a[i+1]);
    return (sum); }