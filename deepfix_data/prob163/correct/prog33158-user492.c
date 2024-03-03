#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500];
	int n1,n2,i;
	int c[500];
	scanf("%d\n%d",&n1,&n2);
	for(i=0;i<n1;i++){
    scanf("%d",&a[i]); }
	for(i=0;i<n2;i++){
	    scanf("%d",&b[i]); }
	    c[500]=a[500]+b[500];
	printf("%d",c[500]);
	return 0; }