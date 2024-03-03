#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,c;
	c=0;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
    if(n%i==0) {
       c=c+i; } }
if(c==n)
    printf("YES");
    else
   printf("NO");
	return 0; }