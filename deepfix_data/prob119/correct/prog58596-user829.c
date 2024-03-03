#include <stdio.h>
#include <stdlib.h>
int towerofhanoi( int k);
int main() {
	int i,j,t,k,a;
	scanf("%d",&t);
	i=0;
	while(i<t)
	{   j=a=0;
	    scanf("%d",&k);
	    while(a<k) {
	        a=towerofhanoi(j);
	        j++; }
	    if(a==k)
	     printf("yes");
	    else
	     printf("no");
	    i++; }
	return 0; }
int towerofhanoi(int k) {
    if(k==0)
     return 0;
    if(k==1)
     return 1;
    else
     return 2*towerofhanoi(k-1) +1; }