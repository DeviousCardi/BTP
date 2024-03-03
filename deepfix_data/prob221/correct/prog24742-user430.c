#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1; i<=2*n-1; i++)
    {printf("*");}
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
        printf(" ");}
        printf("*");
        for(k=1; k<n+1-(2*i);k++){
        printf(" ");}
        printf("*"); }
	return 0; }