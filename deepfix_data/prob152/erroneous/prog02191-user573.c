#include <stdio.h>
int flag=0;
void check(int arr[],int size,int sum) {
    if(S<0||size==0)
    return;
    if(S==0) {
        flag=1;
        return; }
    check(arr,size-1,sum);
    check(arr,size-1,sum-a[size-1]); }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum=0;
    for(i=0;i<n;i++) {
        sum=sum+a[i]; }
    if(sum%2!=0) {
        printf("NO");
        return 0; }
    else {
        sum=sum/2;
        check(a,n,sum);
    return 0; }