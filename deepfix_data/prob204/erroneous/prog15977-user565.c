#include <stdio.h>
#include <stdlib.h>
int main() {
	int numorg;
	int num;
	int reverse ;
	reverse=0;
	while(num!=0) {
	    reverse=reverse*10;
	    num=numoprg;
	    reverse=reverse+num%10;
	    num=num/10; }
	if(reverse==num)
	printf("YES");
	else
	printf("NO");
	return 0; }