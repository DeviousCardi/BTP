#include <stdio.h>
int chk_num(int inp ) {
    if(inp==0)   return 1;
    if(inp%2==0) return 0;
    if(inp%2==1) return chk_num(inp/2); }
int main() {
    int T=0,I=0,K=0;
    scanf("%d",&T);
    for(I=0;I<T;I+=1) {
        scanf("%d",&K);
        if(chk_num(K)) printf("yes\n"); }
	return 0; }