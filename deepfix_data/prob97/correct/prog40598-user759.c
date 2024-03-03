#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i=0,j;
    scanf("%d", &h);
    while(i++<h) {
        for(j=1-h;j<h;j++)
            if(((j<0)?-j:j)<i)
                printf("%d", (h+j)%10);
            else
                printf(" ");
        if(h-i)
            printf("\n"); }
	return 0; }