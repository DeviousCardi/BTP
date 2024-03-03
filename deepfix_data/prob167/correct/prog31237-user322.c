#include<stdio.h>
    int s(int n,int a[]){
        if(n==0) return 0;
        if(n>0)  return a[n-1]+s(n-1,a); }
   int main() {
    int N,i;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
      printf("%d",s(N,a));
     return 0; }