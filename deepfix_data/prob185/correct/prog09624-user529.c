#include <stdio.h>
int main() {
    int N,S=0,i,res;
    scanf("%d",&N);
    scanf("%d",&S);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
        S+=a[i]; }
    res=recall(a,S,N-1);
    return 0; }
int recall(int a[],int S,int n) {
    if(n==0)
        return 0;
    return (recall(a,S-a[n],n-1) || recall(a,S,n-1)); }