#include <stdio.h>
long int sum(long int arr[],int n) {
    if(n==0) return 0;
    else return arr[0]+sum(arr+1,n-1); }
int check(long int arr[],int key,int n) {
    if(key==0) return 1;
    if(key!=0 && n==0) return 0;
    else return check(arr+1,key-arr[0],n-1)||check(arr+1,key,n-1); }
int main() {
    int n,i,sm,key,res;
    scanf("%d\n",&n);
    long int arr[30];
    for(i=0;i<n;i++) scanf("%ld ",&arr[i]);
    sm=sum(arr,n);
    if(sm%2!=0) {
        printf("NO");
        return 0; }
    else {
        key=sm/2;
        res=check(arr,key,n);
        if(res==1) printf("YES");
        else printf("NO"); }
    return 0; }