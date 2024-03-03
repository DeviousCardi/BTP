#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i;
	int j;
	if(n%2==0)
	printf("Not possible isoscales triangle.");
	else{
	    for(i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
	    if((i==j)&&(i<=(n+1)/2)){
	    printf("*");
	    if((j=n+1-i)&&(i>=(n+1)/2))
	    printf("*"); }
	    else{
	        printf(" "); } }
	    printf("\n"); } }
	return 0; }