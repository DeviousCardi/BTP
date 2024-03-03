#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf ("%d",&n);
	int a[10000];
	for (i=0;i<=n;i++){
	scanf ("%d",a[i]); }
	int S;
	scanf ("%d",&S);
	for (i=0;i<=n;i++){
	    if (a[i]+a[i+1]=S)
	    i++
	    printf ("(a[i],S-a[i])"); }
	return 0; }