#include<stdio.h>
long int difference(long int arr[],long int N,long int diff) {
    static int i=0;
    if(N==1) {
        return diff; }
    diff=diff-arr[i+1];
    i++;
    return difference(arr,N-1,diff); }
int main() {
    long int N;
    scanf("%ld",&N);
    long int num[N];
    for(int i=0;i<N;i++)
    scanf("%ld",&num[i]);
    int s=num[0];
    printf("%ld",difference(num,N,s));
    return 0; }