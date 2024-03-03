#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int a[i],b,d,e,n,f;
	float c;
	scanf("%d",&n);
	for(i=1;i<=100;i++) {
	    c=n/10^i;
	    if(c<1) {
	    d=i;
	    break; }
	    else ; }
	for(b=0;b<d;b++) {
	    a[b]=(n%10^(b+1)-n%10^b)/10^b; }
	for(f=0;f<d;f++) {
	    if(a[f]==a[d-f-1])
	    e=d+1;
	    else
	    e=0;
	    break; }
	if(e==d+1)
	printf("YES");
	else
	printf("NO");
	return 0; }