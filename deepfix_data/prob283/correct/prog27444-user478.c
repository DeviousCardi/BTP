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
         int m,n,i,j;
         int k;
         scanf("%d",&k);
         for(i=3;i>=0;i++){
             for(j=5;j>=0;j++){
                 if(acker(i,j)==k){
                     m=i;
                     n=j;
                     printf("%d %d",m,n); } } }
	return 0; }