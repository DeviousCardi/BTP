#include <stdio.h>
#include <stdlib.h>
double calls=0;
void tofhanoi(int k)
{   if(k==0)
    return;
        calls++;
    tofhanoi(k-1);
    tofhanoi(k-1); }
int main() {
	int i,t;
	scanf("%d",&t);
	int k[30];
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    calls=0;
	    tofhanoi(k[i]);
	    printf("%lf\n",calls); }
	return 0; }