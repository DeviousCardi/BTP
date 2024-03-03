#include<stdio.h>
int i=0, n
long int f=1;
int product(int i, int N, int a[]) {
    n=i;
    if(n==N)
    return 0;
    f=f*a[i];
    return product(i+1, N, a); }
int main() {
    int j;
    int N;
    scanf("%d\n", &N);
    int a[N];
    for(j=0;j<N;j++)
    scanf("%d ",&a[j]);
    product(i, N, a);
    printf("%ld", f);
    return 0; }