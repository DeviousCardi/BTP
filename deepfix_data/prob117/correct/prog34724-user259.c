#include <stdio.h>
#include <stdlib.h>
int hanoi_moves(int);
void hanoi(int,char,char,char);
int main() {
	int t,k,i,f,n=0,moves;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    f=0;
	    n=1;
	    scanf("%d",&k);
	    moves=0;
	    while(moves<=k) {
	        if(k==moves) {
	            printf("yes\n");
	            f=1;
	            break; }
	        n++;
	        moves=hanoi_moves(n); }
	    if(!f)
	    printf("no\n"); }
	return 0; }
int hanoi_moves(n) {
    if(n==0)
    return 0;
    return (2*hanoi_moves(n-1)+1); }