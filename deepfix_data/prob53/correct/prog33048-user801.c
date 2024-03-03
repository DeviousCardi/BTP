#include<stdio.h>
 long int ans(long int n,long int p[]) {
    if(n==0) return 0;
    if(n==1) return p[0];
    if(n==2) return p[0]-p[1];
    else return ans(n-1,p)-p[n-1]; }
int main() {
    long int N;
    scanf("%ld",&N);
    long int a[N];
    int i;
    for (i=0;i<N;i++)
    scanf("%ld ",&a[i]);
    printf("%ld",ans(N, a));
    return 0; }