#include<stdio.h>
#include<strings.h>
int rev_arr(int a[],int n) {
    if(n<1)
    return 0;
    printf("%d",a[n-1]);
    rev_arr(a,n-1);
    return 0; }
int main() {
    int i,N;
    scanf("%d\n",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d ",&arr[i]); }
    rev_arr(arr,N);
    return 0; }