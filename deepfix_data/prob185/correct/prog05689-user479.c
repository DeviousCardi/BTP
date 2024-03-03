#include<stdio.h>
int recurs(int arr[],int n,int sum) {
    if(sum>0)
    {if(n==0)
    return 0;
    else
    return recurs(arr,n-1,sum-arr[n-1]) || recurs(arr,n-1,sum);}
    else
    return 1; }
int main() {
    int i,k;
    int n,sum,arr[31];
    scanf("%d %d",&n,&sum);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    k=recurs(arr,n,sum);
    if(k==0)
    printf("NO");
    else
    printf("YES"); }