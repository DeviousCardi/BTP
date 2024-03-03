#include<stdio.h>
    long int dif( long int n,long int a[])
    { if(n==0 || n==1) return a[0];
    else return dif(n-1,a)-a[n-1]; }
  int main() {
       long int n;
      scanf("%ld",&n);
    long int a[n];
    if(n>=2&&n<=100000){
    int i=0;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
      printf("%ld",dif(n,a)); }
    return 0; }