#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,q=1,z;
    scanf("%d",&n);
    z=(n+1)/2;
 for(i=1;i<=((2*n+1)/2)+1;i++) {
    for(k=1;k<=z;k++)
    {printf(" ");}
     for(j=1;j<=q;j++){
         if(j%2!=0){
         printf("X");}
         else{
         printf("*");} }
     q=q+1;
     z=z-1;
 printf("\n"); }
return 0; }