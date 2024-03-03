#include <stdio.h>
#include <stdlib.h>
int acker(int m,int n){
    if(m<=3 && n<=5){
    if(m==0)
    { return n+1;}
    if(m>0 && n==0)
    { return acker(m-1,1); }
    if(m>0 && n>0)
    { return acker(m-1,acker(m,n-1)); } }
    else
return 1; }
int main() {
         int b,c,n,i,j,a;
         int k;
         scanf("%d",&k);
         for(i=3;i>=0;i--){
             for(j=5;j>=0;j--){
                 a=acker(i,j);
                 if(a==k){
                     b=i;
                     c=j; } } }
         printf("%d %d",b,c);
	return 0; }