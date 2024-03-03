#include <stdio.h>
#include <stdlib.h>
int j=0,a=0;
int tofhanoi(int k)
{   if(k==1)
    return 1;
    a=tofhanoi(k-1);
    a++;
    j=2*a-1; }
int main() {
	int i,t;
	scanf("%d",&t);
	int k[30];
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    j=0;
	    tofhanoi(k[i]);
	    printf("%d\n",j); }
	return 0; }