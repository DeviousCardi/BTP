#include<stdio.h>
void check(int pidx,int n,int a[n]) {
    if(pidx==n-1) {
        printf("NO");
        return; }
    else {
        if(sum(pidx)==sum(n-1-pidx)) {
            printf("YES");
            return; }
        else
        check(pidx+1,n,a); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    void check(0,n,a); }