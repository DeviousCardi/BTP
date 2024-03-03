#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,r=0;
    if(n<=0)
        return 1;
    for(i=0;i<=n-1)
        r+=catalan(i)*catalan(n-1-i);
    return r; }
int main() {
    int t,k,i,n,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(n=0;n<=17;n++) {
            if(catalan(n)==k) {
                printf("yes");
                count=1;
                break; } }
        if(!count)
            printf("no"); }
	return 0; }