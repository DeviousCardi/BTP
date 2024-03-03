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
       else if(i<n){
           for(j=1;j<2*n-1;j=j+1){
               if(j==n+1-i || j==n+i-1){
                   printf("*");
                   continue; }
               else{
                    printf(" "); } }
           printf("\n"); }
       else{
           for(j=1;j<2*n;j=j+1){
               printf("*\n"); } } }
	return 0; }