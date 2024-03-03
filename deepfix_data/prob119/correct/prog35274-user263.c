#include <stdio.h>
#include <stdlib.h>
int hanoi_moves (int a);
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	   printf("%d\n",hanoi_moves(k)); }
	return 0; }
int hanoi_moves(int a) {
    if(a==0) {
        return 0; }
    else if(a==1) {
       return 1; }
    else {
        return(2*hanoi_moves(a-1)+hanoi_moves(1)); } }