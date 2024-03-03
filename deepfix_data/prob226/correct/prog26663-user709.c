#include <stdio.h>
int main() {
	int d,n,b[1000],i,sum=0;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        sum= sum+ b[i]; }
     printf("%d",sum);
	return 0; }