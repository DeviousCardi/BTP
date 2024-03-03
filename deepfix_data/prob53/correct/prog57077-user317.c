#include<stdio.h>
long int r=0;
long int recur(long int a[],int n,int i){
   scanf("%ld ",&a[i]);
    r-=a[i];
    if(n==1){
    return r; }
    else
    return recur(a,n-1,++i); }
int main() {
     int n;
    scanf("%d",&n);
    long int a[n];
    recur(a,n,0);
    printf("%ld",recur(a,n,0) + 2*a[0]);
    return 0; }