#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    for(i=1;i<=h;i++) {
        for(j=1;j<=(h-i);j++) {
            printf(" "); }
        for(j=1;j<=(b-2*(h-i));j++) {
            if(j<=9)
            printf("%d",j);
            else
            printf("%d",j%10); }
        printf("\n"); }
	return 0; }