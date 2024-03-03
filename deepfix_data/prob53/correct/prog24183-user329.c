#include<stdio.h>
long int sum=0,start,end;
long int difffunc(long int arr[],long int start, long int end) {
    if(start>end)
        return sum;
    sum = sum - arr[start];
    return difffunc(arr,start+1,end); }
int main() {
    int i;
    long int n,arr[100000];
    scanf("%ld", &n);
    for(i=0; i<n; i++) {
            scanf("%ld", &arr[i]); }
    start=1;
    end = n-1;
    sum = arr[0];
    sum = difffunc(arr,start,end);
    printf("%ld",sum);
    return 0; }