#include<stdio.h>
int main() {
    int i,N,ans;
    scanf("%d\n",&N);
    if(N>2) {
        int num[N];
        for(i=0;i<N-1;i++) {
            scanf("%d ",&num[i]); }
            scanf("%d",&num[N-1]);
        ans=difference(num,N);
        printf("%d",ans); }
    return 0; }
int difference(int num[],int n) {
    int diff=num[0];
    diff=diff-num[n-1];
    num[0]=diff;
    if(n>2)
        return difference(num,n-1);
    if(n==2)
        return diff; }