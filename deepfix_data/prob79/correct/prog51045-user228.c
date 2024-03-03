#include <stdio.h>
#include <stdlib.h>
int f(long int t[10000],int i,int j){
    long int sum=0;
    int k;
    for(k=i;k<j;k++){
        sum=sum+t[k]; }
    return sum; }
int main() {
   long int n,t[n];
   long int i;
   scanf("%ld",&n);
   for(i=0;i<n;i++){
       scanf("%ld",&t[i]); }
   for(i=0;i<n;i++){
       if(f(t,0,i+1)==f(t,i+1,n)){
           printf("%ld %ld",i+1,n-i-1);
           break;
       }else{
         if(f(t,0,i+1)>f(t,i+1,n)&&f(t,0,i)<=f(t,i+1,n)){
             printf("%ld %ld",i+1,n-i-1);
         }else{
             if(f(t,0,i+1)<f(t,i+1,n)&&f(t,0,i+1)>=f(t,i+2,n)){
                 printf("%ld %ld",i+1,n-i-1);
             }else{
                 continue; } } } }
	return 0; }