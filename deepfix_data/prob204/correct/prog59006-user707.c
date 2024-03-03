#include <stdio.h>
#include <stdlib.h>
int power(int a,int b) {
    int k=0;int power=1;
    for(k=0;k<b;k++) {
        power=power*a; }
   return power; }
int main() {
	int n,i,j,b,r,count=0;int rev[100];
	scanf("%d",&n);
	for(i=0;n>0;i++) {
	    b=n%10;
	    n=n/10;
	    rev[i]=b;
	    count=count+1; }
	 for(j=0;j<count;j++) {
	  r=r+power(10,count-j+1)*rev[i]; }
	if(n==r)
	printf("YES");
	else
	printf("NO");
	return 0; }