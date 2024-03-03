#include <stdio.h>
int sum=0,n,i;
int SUM(int* a,int i){
    if(i==n)
    return (sum==0);
    sum= (sum+*a)||(sum-*a);
    return SUM(*a+1,i+1); }
int main() {
    int y;
    int *x;
    scanf("%d ",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    x= arr;
    y=SUM(x,0);
    if(y==1)
    printf("YES");
    else
    printf("NO");
    return 0; }