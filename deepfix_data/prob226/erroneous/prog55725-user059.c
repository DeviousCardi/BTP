#include <stdio.h>
int main() {
	int d,n,b[100],a[100],i,sum=0,prev,next,cur;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=1;i<d;i++) {
	    sum=sum+a[i]; }
    prev=sum;
    cur=sum+prev;
    c=d+2
	while(c<=n) {
	    next=prev+cur
	    prev=cur;
	    cur=next;
	    c++ }
	if(n<d)
	printf("%d",a[n]);
	else if(n>=d && n<=30)
	printf("%d",next);
	return 0; }