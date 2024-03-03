#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,i,j,k,l,m;
     scanf("%d",&n);
     for(i=1;i<=n;i++)  {
         if(i<=(n+1)/2)  {
         for(j=1;j<=(5-i);j++)  {
             printf(" ");
         }   printf("*");
         if(i>=3)  {
             for(k=1;k<=(i-2);k++)  {
                 printf(" ");
             }  }  else  {
                 break; }
            printf("*"); }
         else   {
         for(l=1;l<=(i-5);l++)  {
             printf(" ");
         }   printf("*");
         if(i<=(n-2))  {
             for(m=1;m<=(n-i-1);m++)  {
                 printf(" ");
             }  }  else  {
                 break; }
         }  printf("*"); }
	return 0; }