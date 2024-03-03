#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,q=1,z,s=1,t,d,o,l;
    scanf("%d",&n);
    z=(n+1)/2;
    t=n;
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
     for(l=n+2;l<=(2*n+1);l++) {
         for(o=1;o<=s;o++)
    {printf(" ");}
    s=s+1;
    for(d=1;d<=t;d++){
         if(d%2!=0){
         printf("X");}
         else{
         printf("*");} }
     t=t-1; }
return 0; }