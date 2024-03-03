#include <stdio.h>
int main() {
    int n,A[30],sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    sum=fun(A,n);
    if(sum%2==0)
    printf("YES");
    else printf("NO");
    return 0; }
int fun(int arr[],int n) {
    int sum=0;
    sum+=arr[n-1];
    if(n==0)
    return sum;
    else
    return fun(arr,n-1); }