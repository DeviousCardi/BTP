#include <stdio.h>
int main() {
	int j,n1=0,n2=0,a[n1],b[n2],i,count=0;
	scanf ("%d\n",&n1);
	for (i=0;i<n1;i++) {
	    scanf ("%d",&a[i]); }
	printf ("\n");
	scanf ("%d\n",&n2);
	for (i=0;i<n2;i++) {
	    scanf ("%d",&b[i]); }
	for (i=0;i<n1;i++) {
	    if (b[0]==a[i]) {
	    for (j=1;j<n2;j++) {
	        if (b[j]==a[i+j]) {
	            count++; }
	        else {
	            break; } } }
	    else {
	        continue; } }
	if (count==n2) {
	    printf ("YES"); }
	else {
	    printf ("NO"); }
	return 0; }