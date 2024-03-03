#include<stdio.h>
int main(){
int i,j,a,n,k;
scanf("%d",&n);
  a=1;
       for(i=(n+1)/2;i<=n && i>0;i--) {
         for(j=i;j<(2*a)-1+i;j++) {
             if (j<i)
                {printf(" ");}
             else if(j=i)
                {printf("%d",j);} }
                 printf("\n");
       a++; }
return 0; }