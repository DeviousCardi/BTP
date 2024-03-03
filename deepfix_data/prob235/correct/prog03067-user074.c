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
       for(k=1;k<=(n+1)/2;k++) {
         for (j=k;j< n;j++) {
             printf("%d",j); }
                printf("\n");
         a++; }
return 0; }