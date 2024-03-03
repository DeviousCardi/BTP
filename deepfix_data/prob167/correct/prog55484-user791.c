#include<stdio.h>
int sum(int N,int a[]) {
   if(N==1)
   return a[N-1];
   else
   return (a[N-1]+sum(N-1,a)); }
int main() {
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("%d",sum(N,a));
    return 0; }