#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i,j;
	scanf("%d",&n);
for(i=0;i<(n+1)/2;i++;)
for(j=1;j<=n-i;){
if(j<=i)
printf(" ");
else
printf("*");}
	return 0; }