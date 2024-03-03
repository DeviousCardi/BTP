#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,i,j,k,l;
     scanf("%d",&n);
     for(i=1;i<=5;i++) {
         if(i==5) {
             for(l=1;l<=(2*n-1);l++)
	printf("*"); }
         else {
             for(j=1;j<(6-i);j++)
             printf(" ");
             printf("*\n");
             if(i!=1) {
             for(k=1;k<=(2*i-3);k++)
             printf(" ");
             printf("*\n"); } } }
	return 0; }