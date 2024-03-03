#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=n+1;i++) {
	for (j=1;j<=n+1;j++) {
	    if (j<=n-i)
	    printf (" ");
	    else {
	    if ((i+j)%2==0)
	    printf ("%c",'x');
	    else { printf ("%c",'*');} } }
	    printf ("\n"); }
	for (i=1;i<=n+1;i++) {
	for (j=1;j<=n+1;j++) {
	    if (j<=i)
	    printf (" ");
	    else {
	    if ((i+j)%2==0)
	    printf ("%c",'x');
	    else { printf ("%c",'*');} } }
	    printf ("\n"); }
	return 0; }