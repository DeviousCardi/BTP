#include<stdio.h>
int product(int a[],int N);
int product(int a[],int N) {
    if(N-1>=0)
    return (product(a,N-1)*a[N-1]);
    else
    return 0; }
int main() {
    int N,i,p;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    p=product(a,N);
    printf("%d",p);
    return 0; }