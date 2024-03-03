#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=(n/2+1);i++) {
        for(j=1;j<=(n/2+i);j++) {
            if(j<=(n/2-i+1)){printf(" ");}
            else{printf("*");} }
        printf("\n"); }
    for(k=n-1;k>=(n/2+1);k++) {
        for(l=1;l<=k;l++) {
            if(l<=i){printf(" ");}
            else{printf("*");} }
        {printf("\n");} }
	return 0; }