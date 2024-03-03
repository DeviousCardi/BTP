#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,b,j,h;
    scanf("%d",&h);
    if(h==3)
        printf("*\n**\n*");
    else {
        for(b=1;b<=h;b++) {
            if(b==1||b==h)
                printf("*");
            if(b==2||b==h-1)
                printf("**");
            if(b!=1&&b!=2&&b!=h-1&&b!=h) {
                if(b<=(h/2+1)) {
                    printf("*");
                    for(j=1;j<=b-2;j++)
                        printf(" ");
                    printf("*"); }
                else {
                        printf("*");
                        for(a=h-k-1;a>=1;a--)
                            printf(" ");
                        printf("*");
                        n=n-2; } }
            printf("\n"); } }
    return 0; }