#include <stdio.h>
int result(int arr[],int hsum,int n) {
    int i;
    if(hsum==0)
    return 1;
    for(i=n;i>0;i--) {
        return (result(arr,hsum-arr[i],n-1)||result(arr,hsum,n-1)); } }
int main() {
   int a,sum=0,arr[31],i,j,n,hsum;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]);
        sum+=arr[i]; }
    hsum=sum/2;
    a=result(arr,hsum,n);
    if(a==1)
    printf("YES");
    else
    printf("NO");
    return 0; }