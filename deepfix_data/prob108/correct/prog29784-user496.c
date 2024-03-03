#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,m;
    scanf("%d",&h);
    for(i=1;i<=h;i++) {
        if(h==1)
        printf("*");
        if(h==2)
        printf("*\n**");
        if(h>2) {
        if(i==1)
        printf("*");
        if(i==2)
        printf("**");
        if(i==h) {
        for(m=1;m<=h;m++)
        printf("*"); }
        if(i!=1&&i!=2&&i!=h) {
        printf("*");
        for(j=1;j<=i-2;j++)
        printf(" ");
        printf("*"); } }
        printf("\n"); }
    return 0; }