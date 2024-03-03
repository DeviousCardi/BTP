#include <stdio.h>
#include <stdlib.h>
int total =0;
int cat(int n) {
    if(!n) return 1;
    else return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<18;++i)
    while(t--) {
        scanf("%d",&k);
        for(i=0;i<18;++i) {
            if(k==cat(i)) {
                printf("yes\n");
                break; }
            else if(cat(i)>k||i==17) {
                printf("no\n"); } } }
	return 0; }