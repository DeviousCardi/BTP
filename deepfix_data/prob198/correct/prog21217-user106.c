#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,N1,N2,min=0;
	scanf("%d\n",&N1);
	int a[N1];
	for(i=0;i<N1;i++) {
	    scanf("%d\n",&a[i]);
	    if(a[min]>a[i])
	    min=a[i]; }
	scanf("%d\n",&N2);
	int b[N2];
	for(j=0;j<N2;j++) {
	    scanf("%d\n",&b[j]);
	    for(i=0;i<N1;i++)
	    scanf("%d\n",&a[i]);
	    if( a[i]!=b[j])
	    printf("%d",a[i]);
	    else if(a[i]==b[j])
	    printf("NO"); }
	return 0; }