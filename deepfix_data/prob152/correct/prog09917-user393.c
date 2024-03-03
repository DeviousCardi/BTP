#include <stdio.h>
int sum(int a[],int n) {
    if(n==0)
    return 0;
    else
    return a[n-1]+sum(a,n-1); }
int check(int a[],int target,int n) {
    if(target==0)
    return 1;
    if(target>0&& n==0)
    return 0;
    if(a[n]>target)
    return check(a,target,n-1);
    return check(a,target,n-1)||check(a,target-a[n],n-1); }
int main() {
    int arr[]={1,2,3,4,5};
    int total=sum(arr,5);
    printf("%d\n",sum(arr,5));
    if(check(arr,8,5)==1)
    printf("YES");
    return 0; }