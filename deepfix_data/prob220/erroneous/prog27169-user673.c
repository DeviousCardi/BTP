#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , i , j, , k, s ;
    scanf("%d",&n);
    s= -1;
    for (i=1 ;i<n ;i++){
        for(j=0 ; j< n-i ; j++){
            printf(" "); }
        printf("*");
        for(k=0;k<s;k++){
            printf(" "); }
        s=s+2 ;
        if(i!=1){printf("*");}
        printf("/n"); }
    for(i=0 ; i<n ; i++){printf("*");}
    return 0; }