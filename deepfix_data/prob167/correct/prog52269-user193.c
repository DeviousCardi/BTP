#include<stdio.h>
int sum_number(int a[],int N){
    int sum=0;
    if(N==0)
      return sum_number;
     return a[N]+sum_number(a,N-1); }
int main()
{int N;
 scanf("%d",&N);
 int sum,i;
 int a[N];
 for(i=0;i<N;i++)
 scanf("%d",&a[i]);
 sum=sum_number(a[N],N-1);
 printf("%d",sum);
                                                                          return 0; }