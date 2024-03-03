#include<stdio.h>
long difference(long arr[],long N,long diff) {
    static int i=0;
    if(N==1) {
        return diff; }
    diff=diff-arr[i+1];
    i++;
    return difference(arr,N-1,diff); }
int main() {
    long N;
    scanf("%ld",&N);
    long num[N];
    for(int i=0;i<N;i++)
    scanf("%ld",&num[i]);
    long s=num[0];
    printf("%ld",difference(num,N,s));
    return 0; }