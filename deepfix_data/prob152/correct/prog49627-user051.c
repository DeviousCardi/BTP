#include <stdio.h>
int equal_sum(int arr[],int n,int sum) {
    if(n==0 || n==1)
        return 0;
    if((sum - arr[0])==arr[0])
        return 1;
    else
        return equal_sum(arr+1,n-1,sum-2*arr[0]); }
int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    if(equal_sum(arr,n,sum)==1)
        printf("YES");
    else
        printf("NO");
    return 0; }