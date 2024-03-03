#include<stdio.h>
int prod(int a[],int N)
{  if(N>=1) {
    int p=a[N];
    p=p*prod(a[N-1],N-1);
    return p; } }
int main() {
    int N,a[N+1],p;
    scanf("%d\n",&N);
    for(int i=1;i<=N;i++)
    scanf("%d",&a[i]);
    p=prod(a[N],N);
    printf("%d",p);
    return 0; }