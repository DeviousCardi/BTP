#include<stdio.h>
int n;
int sum(int arr[n],int k) {
if(k==0)
    return 0;
else
    return (sum(n,k-1)+arr[k-1]); }
int main() {
    int i,arr[n],k;
        scanf("%d",&n);
    for(i=0;i<k;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",sum(n,k));
    return 0; }