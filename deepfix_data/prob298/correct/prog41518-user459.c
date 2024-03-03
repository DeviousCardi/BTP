#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned cat(int n) {
   if(n==0)
   return 1;
   else
   return  2*(2*n-1) *cat(n-1)/ (n+1)  ; }
int main() {
    int t,z;
    unsigned n;
    scanf("%d",&t);
    for(j=0;j<t;j++) {
        scanf("%u",&n);
        for (i=0; i<17; i++) {
	        if(n==cat(i)); {
	            printf("yes");
	            z=1;
	            break; } }
	    if(z!=1) printf("no"); }
	return 0; }