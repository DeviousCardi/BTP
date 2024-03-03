#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,*choco_time;
	scanf("%d",&n);
	int alice_time=0,bob_time=0,alice_index=0,bob_index;
	bob_index=n-1;
	choco_time=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
	    scanf("%d",&choco_time[i]); }
	while(alice_index<=bob_index) {
	    if(alice_time<=bob_time) {
	        alice_time+=choco_time[alice_index];
	        alice_index+=1; }
	    else {
	        bob_time+=choco_time[bob_index];
	        bob_index-=1; } }
	printf("%d %d",alice_index,n-alice_index);
	return 0; }