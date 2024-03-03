#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    return (cat(n-1)*(n)*(2*n-1)); }
int main() {
    printf("%d",cat(1));
    int i,j,t,k;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<17;j++) {
            if(k==cat(j)); {
                printf("yes\n");
                break; }
            if(k<cat(j)) {
                printf("no\n");
                break; }
            if(k>cat(j))
            continue; } }
	return 0; }