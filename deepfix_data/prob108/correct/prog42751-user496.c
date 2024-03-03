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
        for(k=1;k<=b-3;k++)
        printf(" ");
        printf("*"); } }
    return 0; }