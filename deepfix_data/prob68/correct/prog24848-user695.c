#include<stdio.h>
int prod(int k,int a[k]) {
    int p;
    p=a[k]*prod(k-1,a[k-1]);
    return p; }
int main() {
    int N,a[N],p;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    p=prod(N,a[N]);
    printf("%d",p);
    return 0; }