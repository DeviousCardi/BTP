#include<stdio.h>
int main() {
    int n,s=1,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int sum(int a[],int n,int index,int curr_sum);
    s=sum(arr,n,0,0);
    printf("%d",s);
    return 0; }
int sum(int a[],int n,int index,int curr_sum) {
    if(index==n)
    return curr_sum;
    curr_sum=curr_sum+a[index];
    sum(a,n,index+1,curr_sum); }