#include <stdio.h>
#include <stdlib.h>
int hanoi ( int n) {
    if (n==0)
    return 0;
    else return 2*hanoi(n-1)+1; }
int main() {
	int i, t, n,j,str[1000],a;
	scanf("%d",&t);
	for (i=0;i<1000;i++)
	{  if(hanoi(i)<=5000000)
	    str[i]=hanoi(i);
	    else
	    break; }
	for(i=0;i<t;i++)
	{scanf("%d",&n);
	    for(j=0;j<1000;j++) {
	        if(str[j]==n)
	        a=1; }
	    a=0; }
	if (a==1)
	printf("yes\n");
	else
	printf("no\n");
	return 0; }