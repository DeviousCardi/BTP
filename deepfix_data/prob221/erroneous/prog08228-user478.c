#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
   if(i<n && j!=n+1-i && j!=n+i-1 ){
        printf(" ");
        else{
            printf("*"); } }
       for(j=1;j<2*i;j++){
           printf("*"); }
         printf("\n"); }
	return 0; }