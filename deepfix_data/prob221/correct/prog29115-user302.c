#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i,j;
    for(j=1;j<=((2*n)-1);j=j+1){
        printf("*");
    for(i=2;i<=n;i=i+1){
    if((i==j)||(j==2*n-i+1)){
        printf("*"); }
    printf("\n"); } }
	return 0; }