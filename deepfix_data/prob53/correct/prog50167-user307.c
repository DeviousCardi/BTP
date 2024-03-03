#include<stdio.h>
    long int sum(long int n,long int a[])
    { if(n==0) return 0;
    else return a[n-1]+sum(n-1,a);}
  int main() {
       long int n;
      scanf("%ld",&n);
     long int a[n];
    int i=0;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
      printf("%ld",sum(n,a));
    return 0; }