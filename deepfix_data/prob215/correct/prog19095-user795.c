#include <stdio.h>
#include <stdlib.h>
int main() {
	int num,div,sum=0;
	scanf("%d",&num);
	for(div=1;div<num;div++) {
	    if("num%div==0")
	    sum=sum+div;  }
	if("num==sum") {
	    printf("Yes"); }
	else
	    printf("No");
	return 0; }