#include <stdio.h>
int check(int arr[],int n,int sum1,int sum2,int index) {
    if(index==n)
        return 0;
    if(sum1==sum2 && index!=0)
        return 1;
    return check(arr,n,sum1+arr[index],sum2,index+1)||check(arr,n,sum1,sum2+arr[index],index+1); }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int res=check(arr,n,0,0,0);
    if(res)
        printf("YES");
    else
        printf("NO");
    return 0; }