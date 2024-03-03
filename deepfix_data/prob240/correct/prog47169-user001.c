#include <stdio.h>
int catalan(int N) {
    if(N==0) return 1;
    int I=0, res=0;
    for(I=0;I<N;I+=1) {
        res+=(catalan(I))*(catalan(N-1-I)); }
    return res; }
int main() {
    int T=0,I=0,J=0,K=0;
    scanf("%d",&T);
    for(I=0;I<T;I+=1) {
        scanf("%d",&K);
        while(catalan(J)<K) {
            J+=1; }
        printf("%d\n",catalan(J-1)); }
	return 0; }