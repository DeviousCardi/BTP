#include <stdio.h>
int sumcheck(int arr[],int start,int end) { }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    sumcheck(arr,0,n);
    return 0; }