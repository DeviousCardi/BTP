#include <stdio.h>
#include <stdlib.h>
int rec(int n)
{  if(n==0)
return 1;
   if(n==1)
   return2;
   else
   return 2*rec(n-1); }
int main() {
	int n,k,p,i,a=0;
	scanf("%d\n",&n)
	for(p=0;p<n;p++) {
	    a=0;
	    scanf("%d\n",&k);
	    for(i=0;i<23;i++) {
	        if(k==(rec(i)-1)) {
	            a=1;
	            break; } }
	    if(a=1)
	    printf("yes");
	    else
	    printf("no");
	    printf("\n"); }
	return 0; }