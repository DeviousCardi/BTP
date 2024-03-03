#include<stdio.h>
int main() {
    int n,s,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    int sum(int a[],int n,int index,int pre_sum);
    s=sum(arr,n,0,0);
    printf("\n%d",s);
    return 0; }
int sum(int a[],int n,int index,int pre_sum) {
   int s;
   if(index==n)
   return pre_sum;
   s=pre_sum+a[index];
   sum(a,n,index+1,s); }