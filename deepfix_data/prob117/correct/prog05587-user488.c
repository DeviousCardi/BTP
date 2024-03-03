#include <stdio.h>
#include <stdlib.h>
int power(int k) {
if(k==0)
return 0;
else
return 2*power(k-1)+1; }
int main() {
	int i,t,l,a[10],k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%d",&a[i]);
	for(k=0;k<30;k++)
	{l=power(k);
	if(a[i]==l) {
	printf("yes\n");
	break; } }
	if(k==30)
	printf("no\n"); }
	return 0; }