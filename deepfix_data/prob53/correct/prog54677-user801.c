#include<stdio.h>
 int ans(int n,int p[]) {
    if(n==0) return 0;
    if(n==1) return p[0];
    if(n==2) return p[0]-p[1];
    else return ans(n-1,p)-p[n-1]; }
int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    int i;
    for (i=0;i<N;i++)
    scanf("%d ",&a[i]);
    printf("%d",ans(N, a));
    return 0; }