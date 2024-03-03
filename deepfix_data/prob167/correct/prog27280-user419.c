#include<stdio.h>
int add(int n);
int main() {
    int N,a[100000],sum;
    scanf("%d",&N);
    scanf("%d",a);
    sum=add(a[N-1]);
    printf("%d",sum);
    return 0; }
int add(int N) {
    int a[10^5];
    if(N>=2)
    return (a[N-1]+add(a[N-2])); }