#include<stdio.h>
int func(int num[],int n,int a) {
    if(n==1) return a;
    num[10];
       num[0]=a-num[1];
    int i;
      for(i=1;i<n-1;i++)  num[i]=num[i+1];
    return func(num,n-1,num[0]) ; }
int main() {
  int n,a;
        scanf("%d",&n);
  int num[10],i;
        for(i=0;i<n;i++)   scanf("%d",&num[i]);
  int diff;
       diff=func(num,n,a);
    return 0; }