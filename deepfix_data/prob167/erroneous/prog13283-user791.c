#include<stdio.h>
int sum(int N,int a[])
{ int add=a[N-1];
  return sum(N-1,a)+sum(N-2,a); }
int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("%d",sum(N))
    return 0; }