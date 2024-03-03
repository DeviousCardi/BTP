#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i,j;
    for(i=1;i<=n;i=i+1){
    for(j=1;j<=n;j=j+1){
        if(i==1){
            printf("*");} }
        if((j==i)||(j==n-i+1)){
            printf("*");}
            else{
                printf(" "); } }
    printf("\n"); }
	return 0; }