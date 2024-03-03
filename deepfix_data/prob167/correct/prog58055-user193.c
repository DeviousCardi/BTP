#include<stdio.h>
int sum_number(int a[],int N){
    int sum=0;
    sum= sum+a[N];
     return sum_number(a,N-1); }
int main()
{int N;
 scanf("%d",&N);
 int sum,i;
 int a[N];
 for(i=0;i<N;i++)
 scanf("%d",&a[i]);
 sum=sum_number(a[N],N);
 printf("%d",sum);
                                                                          return 0; }