#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=n+2;i++) {
	for (j=1;j<=n+1;j++) {
	    if (j<=n-i+1)
	    printf (" ");
	    else {
	    if ((i+j)%2==0)
	    printf ("%c",'*');
	    else { printf ("%c",'x');} } }
	    printf ("\n"); }
	for (i=1;i<=n+1;i++) {
	for (j=1;j<=n+1;j++) {
	    if (j<=i+1)
	    printf (" ");
	    else {
	    if ((i+j)%2==0)
	    printf ("%c",'*');
	    else { printf ("%c",'x');} } }
	    printf ("\n"); }
	return 0; }