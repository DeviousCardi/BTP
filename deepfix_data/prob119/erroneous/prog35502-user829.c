#include <stdio.h>
#include <stdlib.h>
int towerofhanoi( int k)
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	i=0;
	while(i<t)
	{   j=n=0;
	    scanf("%d",&k);
	    while(n<k) {
	        n=towerofhanoi(j);
	        j++; }
	    if(n==k)
	     printf("yes");
	    else
	     printf("no");
	    i++; }
	return 0; }
int towerofhanoi(int k) {
    if(k==0)
     return 0;
    if(k==1);
     return 1;
    else
     return 2*towerofhanoi +1; }