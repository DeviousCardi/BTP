#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    int sum;
    sum=rsum(arr,N);
    printf("%d",sum);
    return 0; }
int sum(tarr[],a) {
    if(a==1)
    return tarr[0];
    else
    return sum(tarr[],a-1)+tarr[a-1]; }