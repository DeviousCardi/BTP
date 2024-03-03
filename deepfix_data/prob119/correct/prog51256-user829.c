#include <stdio.h>
#include <stdlib.h>
int towerofhanoi( int k);
int main() {
	int i,t,k,a;
	scanf("%d",&t);
	i=0;
	while(i<t) {
	    scanf("%d",&k); {
	        a=towerofhanoi(k);
	        printf("%d\n",a); } }
	return 0; }
int towerofhanoi(int k) {
    if(k==0)
     return 0;
    if(k==1)
     return 1;
    else
     return 2*towerofhanoi(k-1) +1; }