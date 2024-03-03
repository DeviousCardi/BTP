#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i=0,j;
    scanf("%d", &h);
    while(i++<h) {
        for(j=(1-h)/2;j<(1+h)/2;j++)
            if(((j<0)?-j:j) + ((i<0)?-i:i) < (1+h)/2)
                printf("%d",(((1+h)/2)+j)%10);
            else if(j<0)
                printf(" ");
        if(h-i)
            printf("\n"); }
	return 0; }