#include<stdio.h>
#include<limits.h>
int func(int num[],int n,int a) {
    if(n==1) return a;
       num[0]=a-num[1];
    int i;
      for(i=1;i<n-1;i++)  num[i]=num[i+1];
    return func(num,n-1,num[0]) ; }
int main() {
printf("%d",INT_MAX);
  int n,a;
        scanf("%d",&n);
  int num[100000],i;
        for(i=0;i<n;i++)   scanf("%d",&num[i]);
     a=num[0];
  int diff;
       diff=func(num,n,a);
   printf("%d",diff);
    return 0; }