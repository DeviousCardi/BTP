#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
       if(i==1){
           for(j=1;j<n;j=j+1){
               printf(" "); }
           printf("*\n"); }
       else if(i>1 && i<n){
           for(j=1;j<2*n-1;j=j+1){
               if(j==n+1-i){
                   printf("*");
                   continue; }
               else if(j==n+i-1){
                   printf("*"); }
               else{
                    printf(" "); } }
           printf("\n"); }
       else{
           for(j=1;j<2*n;j=j+1){
               printf("*"); } } }
	return 0; }