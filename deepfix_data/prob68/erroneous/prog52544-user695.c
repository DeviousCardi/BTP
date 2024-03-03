#include<stdio.h>
int prod(int a[]) {
    int p=1;
    p=p*prod(a[N-1]);
    return p; }
int main() {
    int N,a[N],p;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    p=prod(a[N]);
    printf("%d",p);
    return 0; }