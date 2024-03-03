#include<stdio.h>
    int s(int n,int a[int n],int N){
        if(n>=0&&n<N){
        int i,s;
        s=0;
        for(i=0;i<n,i++)
         s=s+a[i];
         return s; } }
   int main() {
    int N,i,a[N];
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    int sum = s(N,a[N],N);
      printf("%d",sum);
     return 0; }