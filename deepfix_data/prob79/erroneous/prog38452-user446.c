#include <stdio.h>
#include <stdlib.h>
int main() {
	int time,bobsum,a[100],alicesum;
	int *alice,*bob;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	alice=a;
	bob=a+n-1;
	alicesum=a[0];
	bobsum=a[n-1];
	for(time=0;  ;time++){
	    if(time==alicesum){
	        alice++;
	        if(time==bobsum) break;
	        if(alice==bob){
	            alice--;
	            break; }
	        alicesum+=*(alice); }
	    if(time==bobsum){
	        bob--;
	        bobsum+=*(bob);
	        if(bob==alice)break; } }
	printf("%d %d",alice-a+1,n-bob);
	return 0; }