#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n1,n2;
	int sum1=0;
	int sum2=0;
	char A1[1000];
	char A2[1000];
	scanf("%d\n",&n1);
	scanf("%d\n",&n2);
	for (i=0;i<n1;i++) {
	    scanf("%c\n",&A1[i]);
	    sum1=sum1+A1[i]*pow(10,n1-i); }
	for (i=0;i<n2;i++) {
	    scanf("%c\n",&A2[i]);
	    sum2=sum2+A2[i]*pow(10,n2-i;) }
	 z=sum1+sum2;
	 printf("%d",z);
	return 0; }