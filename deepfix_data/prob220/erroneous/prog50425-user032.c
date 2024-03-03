#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=0;i<h;i++); {
        for(j=-(h-1);j<h,j++) {
            if(i==(h-1))
            printf("*");
            else {
                if(j<0&&-j==i)
                printf("*");
                else printf(" "); } } }
	return 0; }