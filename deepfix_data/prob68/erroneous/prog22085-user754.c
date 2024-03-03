#include<stdio.h>
int main() {
    int N;
    scanf("%ld",&N);
    int a[N];
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("%d",product(a,N))
    return 0; }
int product(int ar[],int n) {
    if(n==-1)
        return 1;
    else
        return product(ar,n-1)*ar[n]; }