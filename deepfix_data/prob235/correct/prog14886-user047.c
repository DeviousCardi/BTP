#include <stdio.h>
#include <stdlib.h>
int main() {
           int i,j,b,n, c;
           scanf("%d",&n);
           b=(n/2);
           c=(n+1)/2;
           for(i=1;i<=(n+1)/2;i=i+1){
            for(j=b;j>0;j=j-1){
                printf(" ");}
                b=b-1;
                for(j=0;j<(2*i-1);j=j+1)
                printf("%d",(c+j)%10);
                c=c-1;
                printf("\n");}
                b=1;
                c=1;
                for(i=(n-1)/2;i>0;i--){
                for(j=1;j<=b;j++){
                    printf(" ");}
                    b=b+1;
                    for(j=1;j<=(2*i-1);j=j+1) {
                     printf("%d",(c+j)%10); }
                    printf("\n");
                    c=c+1; }
return 0; }