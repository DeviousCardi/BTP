#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int transfer(int n,char from,char to,char temp){
   int sol1,sol;
   if(n==0)
   return 0;
   if(n==1)
   return 1;
      sol1=transfer(n-1,from,temp,to);
       sol= transfer(n-1,temp,to,from);
    return(sol+sol1+1); }
int main(){
int t,i,j,a[10000],count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf(" %d",&a[i]); }
 for(i=0;i<t;i++){
     for(j=0;j<10000;j++){
         if(a[i]==transfer(j,'l','r','c')){
             count++;
             printf("%d",count); } } }
 if(count>0)
 printf("yes");
 else
 printf("no");
        return 0; }