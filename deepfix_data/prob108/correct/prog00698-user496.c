#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b,i,j,k;
    scanf("%d %d",&h,&b);
    for (i=1;i<=h;i++) {
        if (i==1||i==h) {
        for(j=1;j<=b;j++)
        printf("*"); }
        else {
        printf("*");
        for(k=1;k<=b-2;k++)
        printf(" ");
        if(b>1)
        printf("*"); }
        printf("\n"); }
    return 0; }