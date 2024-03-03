#include <stdio.h>
int hanoi_time(int N) {
    if(N==0) return 0;
    int res=0;
    res+= hanoi_time(N-1);
    res+= 1;
    res+= hanoi_time(N-1);
    return res; }
int chk_num(int inp ) {
    int I=0;
    while(hanoi_time(I)<=inp) {
        if(inp==hanoi_time(I)) return 1;
        I+=1 }
    return 0; }
int main() {
    int T=0,I=0,K=0;
    scanf("%d",&T);
    for(I=0;I<T;I+=1) {
        scanf("%d",&K);
        if(chk_num(K)) printf("yes\n");
        else printf("no\n"); }
	return 0; }