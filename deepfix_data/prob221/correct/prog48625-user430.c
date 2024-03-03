#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,x;
    scanf("%d",&n);
    x=2*n-1;
    for(i=1; i<=2*n-1; i++)
    {printf("*");}
    printf("\n");
    for(i=0; i<n-1; i++){
        for(j=0; j<=i; j++){
        printf(" ");}
        printf("*");
        for(k=1; k<=x-4;k++){
        printf(" ");}
        if(i==n-2)
        {break;}
        else
        printf("*\n");
        x=x-4; }
	return 0; }