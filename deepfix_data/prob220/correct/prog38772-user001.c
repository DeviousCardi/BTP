#include <stdio.h>
#include <stdlib.h>
int space(int a) {
    int L;
    for(L=0;L<a;L=L+1) {
        printf(" "); }
    return 0; }
int main() {
    int I,L,K;
    scanf("%d", &I);
    space(I-1);
    printf("*\n");
    if(I!=1) {
    for(L=1;L<(I-1);L=L+1) {
        space(I-1-L);
        printf("*");
        space((2*L)-1);
        printf("*\n"); }
    for(K=0;K<((2*I)-1);K=K+1) {
        printf("*"); } }
		return 0; }