#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,l,m,n,p;
scanf("%d",&n);
p=(n+1)/2;
for(i=1;i<=p;i++){
    for(j=1;j<=i;){
        if(j!=1 && j!=i){
            printf(" ");}
         else
    printf("*");
    j++; }
    printf("\n"); }
    for(l=p+1;l<=n;l++){
    for(m=1;m<=i;m++){
        if(m!=1 && m!=i)
            printf(" ");
        else
    printf("*"); }
    printf("\n"); }
    return 0; }