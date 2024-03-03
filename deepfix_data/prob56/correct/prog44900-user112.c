#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0||n==1) return 1;
    else           return (cat(n-1)*2*(2*n+1))/n+2; }
int check_cat(int n) {
    int i;
    if(n<0) return 1;
    for(i=0;i<=n;i++) {
        if(n==cat(i))  return n;
        else           return check_cat(n+1); }
    return 0; }
int main() {
    int t,n;
    scanf("%d",&t);
    while(t!=0) {
        int ans=0;
        scanf("%d",&n);
        ans=check_cat(n);
        printf("%d",ans);
        t--; }
	return 0; }