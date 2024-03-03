#include <stdio.h>
int check(int a[],int size,int index,int sum1,int sum2) {
    if(index==size)
        return sum1==sum2;
    return check(a,size,index+1,sum1+a[index],sum2)||check(a,size,index+1,sum1,sum2+a[index]); }
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