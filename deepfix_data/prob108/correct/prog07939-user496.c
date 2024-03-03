#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,m;
    scanf("%d",&h);
    j=1;
    for(i=1;i<=h;i++) {
        if(i==1)
        printf("*");
        if(i==h) {
        for(m=1;m<=h;m++)
        printf("*"); }
        if(i!=1&&i!=h) {
        printf("*");
        while (j<i-1) {
        printf(" ");
        j++; }
        printf("*"); }
        printf("\n"); }
    return 0; }