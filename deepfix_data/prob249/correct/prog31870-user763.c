#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)==(n-1)){
            printf("*");
            printf("\n");}
            else printf(" "); } }
    return 0; }