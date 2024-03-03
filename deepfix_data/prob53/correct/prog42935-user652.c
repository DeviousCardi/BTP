#include<stdio.h>
double func(double num[],int n,double a) {
    if(n==1) return a;
       num[0]=a-num[1];
    int i;
      for(i=1;i<n-1;i++)  num[i]=num[i+1];
    return func(num,n-1,num[0]) ; }
int main() {
 double a;
 int n;
        scanf("%d",&n);
  int i;
  double num[100000];
        for(i=0;i<n;i++)
        scanf("%f",&num[i]);
     a=num[0];
  int diff;
       diff=func(num,n,a);
   printf("%d",diff);
    return 0; }