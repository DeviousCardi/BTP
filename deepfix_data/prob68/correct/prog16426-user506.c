#include<stdio.h>
int i=0, n, f=1;
int main() {
    int j;
    int N;
    scanf("%d", &N);
    int a[N-1];
    for(j=0;j<N;j++)
    scanf("%d ",&a[j]);
    return 0; }
int product(int i, int N, int a[i]) {
    n=i;
    if(n==N-1)
    return 0;
    f=f*a[i];
    return product(i+1, N, a[i+1]); }