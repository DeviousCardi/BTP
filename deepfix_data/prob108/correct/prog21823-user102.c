#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,m,p,n;
	scanf("%d",&n);
	p=(n+1)/2;
	for(i=1;i<=p;i++){
	for(j=1;j<=i;j++){
	 if((j!=1)&&(j!=i))
	 printf("  ");
	 else printf("*"); }
	printf("\n"); }
	for(l=p;l<=n;i++){
	for(m=1;m<=(n-l+1);m++){
	 if((m!=1)&&(m!=(n-l+1)))
	 printf("  ");
	 else printf("*"); }
	printf("\n"); }
	return 0; }