#include <stdio.h>
#include <stdlib.h>
int sum(int);
int sum	(int n)
{	int i,s;
	for(i=1;i<(n/2);i++) {
	    if(n%1==0) {
	        s=s+i;
	    }}
	    return s;}
 int main() {
    int n;
    scanf("%d",&n);
	   int z=sum(n);
	    if(z==n) {
	        printf("YES"); }
	    else {
	        printf("NO"); }
	return 0; }