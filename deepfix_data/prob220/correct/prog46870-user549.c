#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,l;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++)    {
	    for(j=n; j>=2; j--)   {
	        printf("%c",' '); }
	    printf("%c",'*');
	    for(k=2; k<=2*i-1; k++)   {
	        printf("%c",' '); }
	    printf("%c",'*');
	    printf("\n"); }
	for(l=1; l<=n; l++)   {
	    printf("%c",'*'); }
	return 0; }