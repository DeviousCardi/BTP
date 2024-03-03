#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else
    return (cat(n-1)*2(2*n-)); }
int main() {
    int i,j,k,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<=17;j++) {
            if(k==cat(j)) {
                printf("yes\n");
                break; } }
        if(k==18)
        printf("no\n"); }
	return 0; }