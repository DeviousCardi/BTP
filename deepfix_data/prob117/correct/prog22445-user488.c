#include <stdio.h>
#include <stdlib.h>
int hanoi(int n)
{static int count=0;
hanoi(n-1);
count++;
hanoi(n-1);
return count; }
int pow(int k) {
if(k==0)
return 1;
else
return 2*pow(k-1); }
int main() {
	int i,t,l,a[10],k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%d",&a[i]);
	for(k=0;k<30;k++)
	{l=pow(k)-1;
	if(a[i]==l)
	printf("yes\n");
	else
	printf("no\n"); } }
	return 0; }