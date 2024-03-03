#include <stdio.h>
int main() {
	int j=0,n1=0,n2=0,a[n1],b[n2],i,count=0;
	scanf ("%d\n",&n1);
	for (i=0;i<n1;i++) {
	    scanf ("%d",&a[i]); }
	printf ("\n");
	scanf ("%d\n",&n2);
	for (i=0;i<n2;i++) {
	    scanf ("%d",&b[i]); }
	for (i=0;i<n1;i++) {
	    for (j=0;j<n2;j++) {
	        if (b[j]==a[i+j]) {
	            count++;
	        printf("count"); }
	        else {
	            break; }
	    }printf("%d",count);
	    if(count>0)
	        break; }
	if (count==n2) {
	    printf ("YES"); }
	else {
	    printf ("NO"); }
	return 0; }