#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, first=0, second=1, term, i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    if(i==1)
	    term=i;
	    else{
	        term=first+second;
	        first=second;
	        second=term; }
	   printf("%d",term); }
	return 0; }