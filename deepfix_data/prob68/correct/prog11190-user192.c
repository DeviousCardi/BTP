#include<stdio.h>
#define max 1000000000
int product(int t[],int n) {
    int s=n;
    if(s==0)
     return t[0];
    return t[s]*product(t,n-1); }
int main() {
    int arr[max];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",product(arr,n));
    return 0; }