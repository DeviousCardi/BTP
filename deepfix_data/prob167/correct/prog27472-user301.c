#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
long int sum_recurs(long int a[],int i) {
    if(i==0)
         return a[0];
    else
         return sum_recurs(a,i-1) +a[i]; }
int main() {
    int n,i;
    long int arr[100000],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    sum=sum_recurs(arr,n-1);
    printf("%ld",sum);
    printf("\n%ld",INT_MAX);
    return 0; }