#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=(n/2)+1;i++) {
	    for(k=1;k<=(n/2)-i+1;k++)
	{printf(" ");}
for(j=1;j<=2*i-1;j++){
    printf("*"); }
    printf("\n"); }
for(i=1;i<=n/2;i++){
    for(k=1;k<=i;k++){
        printf(" ");}
        for(j=1;j<=n-(2*i);j++){
            printf("*");}
            printf("\n"); }
    return 0; }