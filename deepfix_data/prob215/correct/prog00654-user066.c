#include <stdio.h>
#include <stdlib.h>
int main() {
	int pos_int,i,sum=0;
	scanf("%d",&pos_int);
	for(i=1;i<pos_int;i++) {
	    if(pos_int%i==0)
	    sum=sum+i; }
	    if(sum==pos_int)
	    printf("YES");
	    else
	    printf("NO");
	return 0; }