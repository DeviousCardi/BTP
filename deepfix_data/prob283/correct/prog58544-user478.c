#include <stdio.h>
#include <stdlib.h>
int acker(int m,int n){
    if(m==0)
    { return n+1;}
    if(m>0 && n==0)
    { return acker(m-1,1); }
    if(m>0 && n>0)
    { return acker(m-1,acker(m,n-1)); } }
int main() {
         int m,n,i,j,flag=0;
         int k;
         scanf("%d",&k);
         for(i=3;i>=0;i--){
              for(j=5;j>=0;j--){
            if(acker(i,j)==k){
                     m=i;
                     n=j;
                     flag=1;
                 }else{
                     flag=0; } } }
        if(flag==0){
            printf("-1");
        }else{
         printf("%d %d",m,n); }
	return 0; }