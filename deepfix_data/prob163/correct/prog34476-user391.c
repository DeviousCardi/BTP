#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[502];
	char b[502];
	int c,d;
	int n1,n2,i,k;
	scanf("%d",&n1);
	scanf("%d\n",&n2);
	c=getchar();
  	for(k=0;k<n1&&c!=EOF;) {
	    a[k]=c;
	    c=getchar();
	    k++; }
	scanf("\n");
	d=getchar();
	for(i=0;i<n2;) {
	    b[i]=d;
       d=getchar();
       i=i+1; }
	printf("%c %c",b[0],b[1]);
	return 0; }