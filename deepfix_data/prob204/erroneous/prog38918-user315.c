#include <stdio.h>
#include <stdlib.h>
int main() {
	float n,m,l;
	int i,j;
	scanf("%f",&n);
	m=n;
	l=n;
	int count=0;
	while (m>1) {
	    m=m/10;
	    count=count+1; }
	int a[count];
	for(i=0;i<count;i++)    {
	    for (j=0;j<count-1-i;j++) {
	      l=l/10; }
	    a[i]=int(l)%10; }
	return 0; }