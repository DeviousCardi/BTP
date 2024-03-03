#include <stdio.h>
#include <stdlib.h>
int hanoi_moves(int)
void hanoi(int,char,char,char);
int main() {
	int t,k,i,f,n=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    f=0;
	    n=0;
	    scanf("%d",&k);
	    while(hanoi_moves(n)<=k) {
	        n++;
	        if(k==hanoi_moves) {
	            printf("yes");
	            f=1;
	            break; } } }
	return 0; }
int hanoi_moves(n) {
    return 1; }
void hanoi(int n,char a,char c,char b) {
    if(n==0)
    return;
    hanoi(n-1,a,b,c);
    printf("move 1 disk from %c to %c",a,c); }