#include<stdio.h>
long int sum_number(int a[],int N){
    if(N==0)
      return a[N];
     return a[N]+sum_number(a,N-1); }
int main()
{int N;
 scanf("%d",&N);
 int sum,i;
 int a[N];
 for(i=0;i<N;i++)
 scanf("%d",&a[i]);
 sum=sum_number(a,N-1);
 printf("%d",sum);
                                                                          return 0; }