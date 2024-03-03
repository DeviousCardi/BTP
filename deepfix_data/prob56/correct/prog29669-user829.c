#include <stdio.h>
#include <stdlib.h>
int catalan_number(int n) {
    int sum=0,i=0;
    if(n<=1)
     return 1;
    else
    while(i<n)
    { sum+= catalan_number(i)*catalan_number(n-1-i);
     i++; }
    return sum; }
int main() {
	int i,j=0,n,t, k;
	scanf("%d",&t);
	while(j<t) {
	scanf("%d",&k);
	i=0;
	for(;;) {
	    n=catalan_number(i);
	    i++;
	    if(n>k)
	     break; }
	j++;
		printf("%d\n",n); }
	return 0; }