#include <stdio.h>
#include <stdlib.h>
long int ans=0;
void getways(int n, int m) {
    if(n==0) {
        ans++;
        return; }
    getways(n-1,m+1);
    getways(n,m);
    getways(n-3,m+1);
    getways(n,m);
    getways(n-1,m+1);
    getways(n,m);
    getways(n-5,m+1);
    getways(n,m); }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,0);
    printf("%ld",ans);
    return 0; }