#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j=0;
	scanf("%d",&a);
	for(i=1;i<=a/2;i++){
	    if(a%i==0){
	        j=j+i; } }
	if(j==a)
	printf("YES");
	else
	printf("NO");
	return 0; }