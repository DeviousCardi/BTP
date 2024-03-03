#include <stdio.h>
int main() {
	int d,n,b[1000],i,sum=0;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
i=0;
do{
       	sum=sum+b[i]; }
    while(i<n) ;
	printf("%d",sum);
	return 0; }