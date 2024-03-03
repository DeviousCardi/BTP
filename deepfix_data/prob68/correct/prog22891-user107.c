#include<stdio.h>
int p(long int a[],int start,int n) {
    if(n==0)
    return 1;
    else
    return (a[start]*p(a,start+1,n-1)); }
int main() {
    int n,i;
    scanf("%d\n",&n);
    long int a[n+1];
    for(i=0;i<n;i++)
   { scanf("%ld ",&a[i]); }
  long int x=p(a,0,n);
    printf("%ld",x);
    return 0; }