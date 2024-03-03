#include<stdio.h>
long long int func(long long int num[],int n,long long int a) {
    if(n==1) return a;
       num[0]=a-num[1];
    int i;
      for(i=1;i<n-1;i++)  num[i]=num[i+1];
    return func(num,n-1,num[0]) ; }
int main() {
 long long int a;
 int n;
        scanf("%d",&n);
  int i;
  long long int num[100000];
        for(i=0;i<n;i++)
        scanf("%lf",&num[i]);
     a=num[0];
  long long int diff;
       diff=func(num,n,a);
   printf("%lf",diff);
    return 0; }