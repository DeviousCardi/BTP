#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=1;j<=i-1;j++){
           printf(" "); }
       if(i==1){
           for(k=1;k<=2*n-1;k++){
           printf("*");}
           printf("\n"); }
       else {
           printf("*");
       for(j=1;j<=2*n-3-i;j++){
           printf(" "); }
       if(i!=1&&i!=n){
           printf("*"); }
       for(j=1;j<=i-1;j++){
           printf(" "); }
       printf("\n"); } }
	return 0; }