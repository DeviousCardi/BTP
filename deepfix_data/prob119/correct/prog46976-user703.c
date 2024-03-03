#include <stdio.h>
#include <stdlib.h>
int hanoi(int k){
    if(k==0)return 0;
    int i;
    i=2*hanoi(k-1)+1;
    return i; }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d\n",hanoi(k)); }
	return 0; }