#include<stdio.h>
int main(){
int i,j,a,n,k;
scanf("%d",&n);
  a=0;
       for(i=(n+1)/2;i<=n && i>0;i--) {
         for(j=i-1;j<(2*a)-1+i;j++) {
             k=j/2;
             {printf("%(%d)d",k,j);} }
                 printf("\n");a++; }
return 0; }