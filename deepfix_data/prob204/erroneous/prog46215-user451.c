#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,term,sum,t,a,te;
	scanf("%d",&n);
    	term=n%10;
       a=n/10;
        term        =  term%10;
    a=a+a/10;
    	te=a*10+term;
	if(n==te)
    	printf("%d"te);
    	return 0; }