#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=0;i<h;i++)
    {   if(i<=h/2) {
            for(j=0;j<=i;j++) {
                if(j==0||j==1)
                printf("*");
                else
                printf(" "); } }
        else {
            for(j=(h-i-1);j>=0;j--) {
                if(j==0||j==(h-i-1))
                printf("*");
                else
                printf(" "); } }
        printf("\n"); }
	return 0; }