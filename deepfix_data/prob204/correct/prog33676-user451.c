#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,term1,term,te;
	scanf("%d",&n);
    	term1=n%10;
       term=term1;
        term        =  term1%10;
        te  =term1*10+term;
	if(n==te)
    	printf("yes");
    	else
    	printf("no");
    	return 0; }