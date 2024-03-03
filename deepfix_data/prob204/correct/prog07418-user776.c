#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int a[i],b,d,e,n,f;
	float c;
	scanf("%d",&n);
	for(b=1;b<=100;b++) {
	    c=n/10^b;
	    if(c<1) {
	    d=b;
	    break; }
	    else ; }
	for(b=0;b<d;b++) {
	    a[b]=n%10^(b+1)-n%10^b; }
	for(f=0;f<d;f++) {
	    if(a[f]==a[d-f-1])
	    e=d+1;
	    else
	    e=0;
	    break; }
	if(e==0)
	printf("NO");
	else
	printf("YES");
	return 0; }