#include<stdio.h>
int sum(int start,int end,int n,long int a[n] ) {
    long int tsum=0;
    for(int i=start;i<=end;i++)
    tsum=tsum+a[i];
    return tsum; }
void check(int pidx,int n,long int a[n]) {
    if(n==0)
    return;
    if(pidx==n-1) {
        printf("NO");
        return; }
    else {
        if(sum(0,pidx,n,a)==sum(pidx+1,n-1,n,a)) {
            printf("YES");
            return; }
        else
        check(pidx+1,n,a); } }
int main() {
    int n;
    scanf("%d",&n);
    long int a[n];
    for(long int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    check(0,n,a); }