#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b,i,j,k;
    scanf("%d %d",&h,&b);
    j=1;
    for (i=1;i<=h;i++) {
        if (i==1||i==h) {
        k=1;
        while (k<=b)
        printf("*");
        k=k+1; }
        else {
        printf("*");
        while (j<=b-3)
        printf(" ");
        j=j+1;
        printf("*"); } }
    return 0; }