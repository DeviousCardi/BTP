#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
for (k=1;k<=n;k++){
    i=(n+1)/2;
    if(k==1){
        i=(n+1)/2;
        printf("%d",i);}
        else{
for (j=i-1;j<=i+1;j++){
    printf("%d",j);
}}
    printf("\n"); }
	return 0; }