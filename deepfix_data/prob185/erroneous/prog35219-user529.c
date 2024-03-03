# include <stdio.h>
int main() {
    int N,S,i;
    sacnf("%d",&N);
    scanf("%d",&S);
    int trans[N];
    for(i=0;i<N;i++)
        scanf("%d",&trans[i]);
    res=check(trans,S,N-1); }
int res(int a[],int s,int n) {
    if(s==0)
        return 1;
    if(n==0)
        return 0;
    return (res(a,s-a[n],n-1) || res(a,s,n-1)); }