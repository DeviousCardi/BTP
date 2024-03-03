#include <stdio.h>
int main() {
	int d,n,b[d],i,sum=0;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<=n;i++) {
     	sum=sum+b[i];
     	if(n=0)
     	goto flag; }
	printf("%d",sum);
	flag: printf("%d",b[0]);
	return 0; }