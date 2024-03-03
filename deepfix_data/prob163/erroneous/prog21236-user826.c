#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],x,y,i;
	scanf("%d",&x,&y);
	for(i=0;i<x;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<y,i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<x;i++)
	printf ("%d",a[i]);
	for(i=0;i<y;i++)
	printf ("%d",b[i]);
	return 0; }