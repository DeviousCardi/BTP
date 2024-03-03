#include <stdio.h>
#include <stdlib.h>
 int fibo(int n)
 {   int i,count;
     count++;
     if(i==n)
     return i; }
int main() {
	int testcases,k,i;
	scanf("%d",&testcases);
	for(i=0; i<testcases; i++){
	    scanf("%d",&k);
	    if(i==k)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }