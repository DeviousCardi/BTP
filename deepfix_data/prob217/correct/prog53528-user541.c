#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf ("%d",&n);
	int a[10000];
	for (i=0;i<=n;i++){
	scanf ("%d",&a[i]); }
	int S;
	scanf ("%d",&S);
	for (i=0;i<=j;i++){
	    for (j=i;j<=n;j++){
	    if (a[i]+a[j]==S){
	    i++;
	    printf ("%d\n""%d\n",a[i],a[j]);
	    }} }
	return 0; }