#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int transfer(int n,char from,char to,char temp){
   int sol1,sol;
   int count=0;
   if(n>0){
      sol1=transfer(n-1,from,temp,to);
       sol= transfer(n-1,temp,to,from); }
    return(sol1+sol+1); }
int main(){
    int n;
    scanf("%d",&n);
   transfer(n,'l','r','c');
        return 0; }