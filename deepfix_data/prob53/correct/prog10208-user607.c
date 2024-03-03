#include<stdio.h>
int diff(long int n,long int x[])
{  long int y[n-1],i;
   if (n==1) return x[0];
   else {
        y[0]= x[0]-x[1];
        for(i=1;i<n;i++)
             y[i]=x[i+1];
        return diff(n-1,y[n-1]); } }
int main() {
    long int n,x,i;
    scanf("%ld\n",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    scanf("%ld ",&arr[i]);
    x=diff(n,arr[n]);
    printf("%d",x);
    return 0; }