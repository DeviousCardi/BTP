#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n1,n2,j,a[20],b[20],min,c=0;
	min=a[0];
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]);
	    if(a[i]<=min)
	    min=a[i]; }
	scanf("%d",&n2);
	for(j=0;j<n2;j++) {
	    scanf("%d",&b[j]);
	    if(b[j]==min)
	    c=c+1; }
	if(c==0)
	printf("%d",min);
	else
	printf("NO");
	return 0; }