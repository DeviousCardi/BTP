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
void compare(int n){
    int j;
    for(j=0;j<1000;j++){
        if(n==transfer(j,'l','r','c')){
        printf("yes");}
        else{
        printf("no");} } }
int main(){
int t,i,a[1000];
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]);
        compare(a[i]); }
        return 0; }