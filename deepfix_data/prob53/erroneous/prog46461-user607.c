#include<stdio.h>
int main() {
    long int n,x,i;
    long int arr[100000];
    scanf("%ld\n",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    x=diff(n,arr[]);
    printf("%d",x);
    return 0; }
int diff(int n, int arr[x])
{  int y[];
   if (n=1) return x[0];
   else {
        y[0]= x[0]-x[1];
        for(i=1;i<n;i++)
             y[i]=x[i+1];
        int diff(n-1,y[]); }