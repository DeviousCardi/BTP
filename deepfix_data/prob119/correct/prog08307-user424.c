#include <stdio.h>
#include <stdlib.h>
int hanoi(int k){
    if(k==0) return 0;
    else return (1+hanoi(k-1)); }
int main() {
	int t;
	scanf("%d",&t);
	int k[t];
	int i;
	for(i=0;i<t;i++){
	    scanf("%d",&k[i]);
	    printf("%d\n",hanoi(k[i])); }
	return 0; }