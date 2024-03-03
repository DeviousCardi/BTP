#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,n,t;
	int row[n];
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	scanf("%d\n",&row[n]);
	scanf("%d\n",&t);
	for(l=1;l<=t;l++) {
	int j;
	scanf("%d\n",&j);
	if((j!=0)&&(j!=n-1)) {
	if((row[j]>=row[j-1])&&(row[j]>=row[j+1]))
	printf("Yes\n");
	else
    printf("No\n"); }
	if(j==0) {
	    if(row[j]>=row[j+1])
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	if(j==n-1) {
	    if(row[j]>=row[j-1])
	    printf("Yes\n");
	    else
	    printf("No\n"); } }
	return 0; }