#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else return catalan(n-1)*2*(2*n-1)/(n+1); }
int main() {
    int t,k,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        c=0;
        for(j=0;j<=17;j++) {
            if(k==catalan(j))
            c=1; }
        if(c==1)
        printf("yes\n");
        else printf("no\n"); }
return 0; }