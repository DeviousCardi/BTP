#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int a[i],b,d,e,n;
	float c;
	scanf("%d",&n);
	for(b=1;b<=100;b++) {
	    c=n/10^b;
	    if(c<1) {
	    d=b;
	    break; }
	    else ; }
	for(b=0;b<d;b++) {
	    if(a[b]==a[d-b-1])
	    e=d+1;
	    else
	    e=0;
	    break; }
	if(e==d+1)
	printf("YES");
	else
	printf("NO");
	return 0; }