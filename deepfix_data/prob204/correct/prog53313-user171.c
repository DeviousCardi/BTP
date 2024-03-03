#include <stdio.h>
#include <stdlib.h>
int main() {
	int no,rev=0;
	scanf("%d",&no);
	while(no) {
	            rev=(no%10)+(rev*10);
	            no=no/10; }
	if(rev==no)
	    printf("YES");
	else
	    printf("NO");
	return 0; }