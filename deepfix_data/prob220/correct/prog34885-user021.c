#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,t,x;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
       if(i==1){
           for(j=1;j<n;j=j+1){
               printf(" "); }
           printf("*\n"); }
       else if(i<n){
           for(t=1;t<2*n-1;t=t+1){
               if(t==(n+1-i) || t==(n+i-1)) {
                   printf("*");
                   continue; }
               printf("."); }
           printf("\n"); }
       else{
           for(x=1;x<2*n;x=x+1){
               printf("*"); } } }
	return 0; }