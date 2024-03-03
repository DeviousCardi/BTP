#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=(n/2+1);i++) {
        for(j=1;j<=(3+i);j++) {
            if(j<=(4-i)){printf(" ");}
            else{printf("*");} }
        printf("\n"); }
    for(k=1;k<=(n-i);k++) {
        for(l=1;l<=(n-k);l++) {
            if(l<=i){printf(" ");}
            else{printf("*");} }
        {printf("\n");} }
	return 0; }