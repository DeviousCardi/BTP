#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
for (k=1;k<=n;k++){
    if(k==1){
        i=(n+1)/2;
        printf("%d",i);}
        else{
for (j=i-1;j<=i+k;j++){
    printf("%d",j); }
            i=i-1; }
    printf("\n"); }
	return 0; }