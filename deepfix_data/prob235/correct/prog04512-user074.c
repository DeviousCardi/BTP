#include<stdio.h>
int main(){
int i,j,a,n,k;
scanf("%d",&n);
  a=1;
       for(i=(n+1)/2;i<=n && i>=1;i--) {
         for(j=1;j<(2*a)-1+i;j++) {
             if(j>=1 && j<i)
               {printf(" ");}
             else if(j>=i)
               {printf("%d",j);} }
                printf("\n");
         a++; }
       for(i=2;i<=(n+1)/2;i++) {
         for (j=i;j<=n+1-i;j++) {
             if(j>=1 && j<i)
               {printf(" ");}
             else if(j>=i)
               {printf("%d",j);} }
                printf("\n"); }
return 0; }