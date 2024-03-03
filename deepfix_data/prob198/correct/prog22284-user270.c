#include <stdio.h>
#include <stdlib.h>
int max( int n, int a[] ) {
    int i, m;
    m=a[0];
    for (i=0;i<n;i++) {
        if (m < a[i]) m=a[i];
        else continue; }
    return m; }
int main() {
	int n1, n2,i ;
	scanf("%d",&n1);
	int a1[n1];
	for (i=0;i<n1;i++)
	{   scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	int a2[n2];
	for (i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	int max1;
	max1= max(n1,a1);
	printf("%d",max1);
	return 0; }