#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i,j;
if(i==1){
    for(j=1;j<=((2*n)-1);j=j+1){
        printf("*"); }
    printf("\n"); }
    for(i=2;i<=n;i=i+1){
    if((i=j)||(j=2*n-i+1)){
        printf("*"); }
    printf("\n"); }
	return 0; }