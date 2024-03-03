#include <stdio.h>
#include <stdlib.h>
int main() {
	int time,n,i,bobsum,a[100],alicesum;
	int alice,bob;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	alice=0;
	bob=n-1;
	alicesum=a[0];
	bobsum=a[n-1];
	for(time=0;  ;time++){
	    if(time==alicesum){
	        printf("%dalice\n",time);
	        alice++;
	        if(time==bobsum && alice==bob) break;
	        if(alice==bob){
	            alice--;
	            break; }
	        alicesum+=a[alice]; }
	    if(time==bobsum){
	        printf("%dbob\n",time);
	        bob--;
	        bobsum+=a[bob];
	        if(bob==alice)break; } }
	printf("%d %d",alice+1,n-bob);
	return 0; }