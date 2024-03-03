#include<stdio.h>
long difference(long num[],int n) {
    long diff=num[0];
    diff=diff-num[n-1];
    num[0]=diff;
    if(n>2)
        return difference(num,n-1);
    if(n==2)
        return diff; }
int main() {
    int i,N;
    long ans;
    scanf("%d\n",&N);
    if(N>2) {
        long num[N];
        for(i=0;i<N-1;i++) {
            scanf("%ld ",&num[i]); }
            scanf("%ld",&num[N-1]);
        ans=difference(num,N);
        printf("%ld",ans); }
    return 0; }