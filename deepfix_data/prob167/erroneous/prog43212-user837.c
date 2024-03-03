#include<stdio.h>
int sum1(int arr[i]) {
    if(i=0) {
        sum=arr[0]; }
    else{
    sum=sum1(i-1);}
    return sum; }
int main() {
    int N,sum;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<N;i++)
    sum=sum1(arr[i]);
    printf("%d",sum);
    return 0; }