#include <stdio.h>
#include <stdlib.h>
int j=0;
void tofhanoi(int k) {
    if(k==1);
    return;
    tofhanoi(k-1);
    j++;
    tofhanoi(k-1);
    j++; }
int main() {
	int i,t;
	scanf("%d",&t);
	int k[30];
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    j=0;
	    tofhanoi(k[i]);
	    printf("%d",j); }
	return 0; }