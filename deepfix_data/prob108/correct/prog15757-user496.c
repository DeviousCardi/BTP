#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,k,j,i,n;
    scanf("%d",&h);
    if(h==3)
    printf("*\n**\n*");
    else {
        for(k=1;k<=h;k++) {
            if(k==1||k==h)
            printf("*");
            if(k==2||k==h-1)
            printf("**");
            if(k!=1&&k!=2&&k!=h-1&&k!=h) {
            if(k<=(h/2+1)) {
            printf("*");
            for(j=1;j<=k-2;j++)
            printf(" ");
            printf("*"); }
            else
            n=(k+1)/2; {
            printf("*");
            for(i=n;i>=1;i--)
            printf(" ");
            printf("*");
            n=n-1; } }
            printf("\n"); } }
    return 0; }