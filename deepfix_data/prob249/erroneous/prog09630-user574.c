#include <stdio.h>
#include <stdlib.h>
int main() {
int h;
scanf("%d",&h);
int i=1;
for(i=1;i<=(h/2)+1;++i); {
        for(j=0;j<(h/2)+1-i;++j) {
                printf(" "); }
        if(i==1)
            { printf("*\n");}
        else {
                printf("*");
                for(k=0;k<i-2;++k)
                    printf(" ");
                printf("*\n"); } }
	return 0; }