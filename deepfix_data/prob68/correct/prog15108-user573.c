#include<stdio.h>
signed long int product(int a[],int N);
signed long int product(int a[],int N) {
    if(N>=1)
    return (product(a,N-1)*a[N-1]);
    else
    return 1; }
int main() {
    int N;
    int i;
    signed long int p;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    p=product(a,N);
    printf("%ld",p);
    return 0; }