#include <stdio.h>
int main(){
 int a,i,b,sum=0,yr,j,r,k;
 scanf("%d",&a);
 yr=a;
 for(i=0;i<4;i++){
     b=a%10;
     a=a/10;
     sum=sum+b; }
 if(yr%sum==0){
     if(yr>=2016){
         printf("%d",yr); }
     else{
         for(j=0;yr<2016;j++){
         yr=yr+sum; }
     printf("%d",sum); } }
 else{
     r=(yr%sum);
     yr=yr+sum-r;
     if(yr>=2016){
         printf("%d",yr); }
     else{
         for(k=0;yr<2016;k++){
             yr=yr+sum; }
         printf("%d",yr); } }
    return 0; }