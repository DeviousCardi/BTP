#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,n,k,d,v,x;
       scanf("%d",&n);
    int z=1;
    v=((n+1)/2)-1;
      for(i=1;i<=n;i++) {
         if(i<=((n+1)/2)){
         for(k=1;k<=z;k++){
             if((k==1) && (k==z)){
         printf("*");} }
         z=z+1;
         printf("\n"); }
     else{
         for(d=1;d<=v;d++){
         printf("*"); }
         printf("\n");
         v=v-1; } }
	return 0; }