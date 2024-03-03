#include<stdio.h>
int sum(int a,int x)
{   int N;
     if(x<N)
    return sum(a,x+1); }
int main() {
  int N,i,a[100000],x=0;
  scanf("%d",&N);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]);
      x=x+1 ;
    printf("%d ",sum(a,x)); }
    return 0; }