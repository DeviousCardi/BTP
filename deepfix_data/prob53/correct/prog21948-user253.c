#include<stdio.h>
int main() {
    long int i,N,ans;
    scanf("%ld\n",&N);
    long int num[N];
    for(i=0;i<N-1;i++) {
        scanf("%ld ",&num[i]); }
    scanf("%ld",&num[N-1]);
    ans=difference(num,N,1);
    printf("%ld",ans);
    return 0; }
int difference(long int num[],long int n,long int j) {
    long int diff=num[0];
    diff=diff-num[j];
    if(j>=n)
        return diff;
    else {
        return difference(num,n,j+1); } }