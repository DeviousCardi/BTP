#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	scanf("%d%d%d",&i,&j,&k);
	if(i+j>k||j+k>i||i+k>>j) {
	if(i>=j) {
	    if(i>=k) {
	       if(i*i)<(j*j)+(k*k)
	            puts("Acute Triangle");
	       else
	            puts("Not Acute Triangle"); }
	    else
	    if((k*k)<(i*i)+(j*j))
	       puts("Acute Triangle");
	    else
	       puts("Not Acute Triangle"); }
	else
	if((j*j)<(i*i)+(k*k))
	       puts("Acute Triangle");
	else
	       puts("Not Acute Triangle"); }
	else
	     puts("Cannot form a triangle");
	return 0; }