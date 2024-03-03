#include <stdio.h>
#include <stdlib.h>
int main() {
           int i,j,n,b;
           scanf("%d",&n);
           b=(n/2);
           for(i=1;i<=(n+3)/2;i=i+2){
            for(j=b;j>=0;j=j-1)
            printf(" ");
            b=b-1;
            for(j=b;j<=i;j=j+1)
            printf("*");
            printf("\n");}
            for(i=(n+3)/2;i<=n;i=i-2){
            for(j=b;j>=0;j=j-1)
            printf(" ");}
            b=b+1;
            for(j=b;j<=i;j=j-1){
            printf("*");
            printf("\n"); }
return 0; }