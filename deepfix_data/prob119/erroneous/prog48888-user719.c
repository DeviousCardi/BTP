#include <stdio.h>
#include <stdlib.h>
int moves(int k){
    if(k==1)
     return 1;
    return ((moves(k-1)+1)*2 -1) }
int main() {
	int i,t,s[20];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&s[t]); }
	for(i=0;i<t;i++){
	    printf("%d\n",moves(k)); }
	return 0; }