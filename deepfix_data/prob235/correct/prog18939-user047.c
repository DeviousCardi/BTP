#include <stdio.h>
#include <stdlib.h>
int main() {
           int i,j,b,n;
           scanf("%d",&n);
           b=(n/2);
           for(i=1;i<=n;i=i+2){
            for(j=b;j>0;j=j-1){
                printf(" ");}
                b=b-1;
                for(j=1;j<=i;j=j+1)
                printf("%d",i);
                printf("\n");}
                b=0;
                for(j=1;j<=b;j++){
                    printf(" ");}
                    for(j=1;j<=i;j=j+1) {
                     printf("%d",i); }
                    printf("\n");
return 0; }