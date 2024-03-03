#include <stdio.h>
#include <stdlib.h>
unsigned long int no_of_steps(int n) {
    if(n==0) return 1;
    return n*(no_of_steps(n-1)-1)+1; }
int main() {
	int i;
	int flag=0;
	unsigned long int k;
	for(i=0;i<23;i++) {
	    if(no_of_steps(i)==k)
	    k=1 }
	if(flag==1)
	printf("yes");
	else printf("no");
	return 0; }