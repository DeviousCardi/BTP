#include <stdio.h>
int sum=0,n,i;
int SUM(int a[i],int i){
    if(i==n)
    return (sum==0);
    sum= (sum+a[i])||(sum-a[i]);
    return SUM(a[i+1],i+1); }
int main() {
    int y;
    scanf("%d ",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    y=SUM(arr[0],0);
    if(y==1)
    printf("YES");
    else
    printf("NO");
    return 0; }