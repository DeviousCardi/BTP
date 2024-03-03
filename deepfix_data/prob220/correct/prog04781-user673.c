#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , i , space, k, s ;
    scanf("%d",&n);
    s= -1;
    for (i=1 ;i<n ;i++){
        for(space=0 ; space< n-i ; space++){
            printf(" "); }
        printf("*");
        for(k=0;k<s;k++){
            printf(" "); }
        s=s+2 ;
        if(i!=1){printf("*");}
        printf("\n"); }
    for(i=0 ; i<2*n-1 ; i++){printf("*");}
    return 0; }