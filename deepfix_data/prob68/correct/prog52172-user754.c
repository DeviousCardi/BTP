#include<stdio.h>
long product(int [],int);
int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("%ld",product(a,N-1));
    return 0; }
long product(int ar[],int n) {
    if(n==-1)
        return 1;
    else
        return (product(ar,n-1)*ar[n]); }