#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,b,a;
    scanf("%d",&h);
    scanf("%d",&b);
    a=b-2*(h-1);
    for(i=1;i<=h;i++) {
        for(j=1;j<=h-i;j++) {
            printf(" "); }
        for(j=i;j<=a+2*i-2+i-1;j++) {
            if(j<=9)
            printf("%d",j);
            else
            printf("%d",j%10); }
        printf("\n"); }
	return 0; }