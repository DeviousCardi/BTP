#include <stdio.h>
#include <stdlib.h>
int acker(int m,int n){
    if(m<=3 && n<=5){
    if(m==0)
    { return n+1;}
    if(m>0 && n==0)
    { return acker(m-1,1); }
    if(m>0 && n>0)
    { return acker(m-1,acker(m,n-1)); } } }
int main() {
         int m,n;
         int k;
         scanf("%d",&k);
         for(m=0;m<=3;m++){
             for(n=0;n<=5;n++){
                 if(acker(m,n)==k){
                     printf("%d %d",m,n);
                 }else{
                     continue; } } }
	return 0; }