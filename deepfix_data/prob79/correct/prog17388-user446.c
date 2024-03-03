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
    for(time=0; time<100 ;time++){
	    if(alice+1==bob){
	        if(time==alicesum)break;
	        if(time==bobsum)break; }
	    if(alice+2==time && time==bobsum && time==alicesum){
	        alice++;
	        break; }
	    if (time==alicesum){
	        alice++;
	        alicesum+=a[alice]; }
	    if(time==bobsum){
	        bob--;
	        bobsum+=a[bob]; } }
	printf("%d %d",alice+1,n-bob);
    return 0; }