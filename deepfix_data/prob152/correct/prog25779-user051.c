#include <stdio.h>
int lsum=0,rsum=0;
int equal_sum(int arr[],int n,int lsum,int rsum) {
    if(n==0) {
        if(lsum!=rsum)
            return 0;
        else
            return 1; }
    else
        return equal_sum(arr+1,n-1,lsum+arr[0],rsum) || equal_sum(arr+1,n-1,lsum,rsum+arr[0]); }
int main() {
    int n,i,arr[300],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    if(equal_sum(arr,n,lsum,rsum)==1)
        printf("YES");
    else
        printf("NO");
    return 0; }