#include<stdio.h>
int sum(int start,int end,int n,int a[n] ) {
    int tsum=0;
    for(int i=start;i<=end;i++)
    tsum=tsum+a[i];
    return tsum; }
void check(int pidx,int n,int a[n]) {
    if(pidx==n-1) {
        printf("NO");
        return; }
    else {
        if(sum(0,pidx,n,a)==sum(n-1-pidx,n-1,n,a)) {
            printf("YES");
            return; }
        else
        check(pidx+1,n,a); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    check(0,n,a); }