#include <stdio.h>
int sum(int a[],int n) {
    if(n==0)
    return 0;
    else
    return a[n-1]+sum(a,n-1); }
int check(int a[],int target) {
    int i=0;
    int temp=a[i];
    target=target-a[i];
    if(target==0)
    return 1;
    else return (a,target) }
int main() {
    int arr[]={1,2,3,4,5};
    int total=sum(arr,5);
    if((total)%2!=0)
    printf("NO");
    else
    printf("%d",sum(arr,5));
    return 0; }