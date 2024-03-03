#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,i,y[n1],n2,j,z[n2],k,b,min=100000;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
	scanf("%d\n",&y[i]);
	scanf("%d\n",&n2);
	for(j=0;j<n2;j++)
	scanf("%d\n",&z[j]);
	for(k=0;k<n1;k++) {
	    if(y[k]<min)
	    min=y[k]; }
	printf("%d",min);
	return 0; }