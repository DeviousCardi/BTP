#include <stdio.h>
#include <stdlib.h>
int main() {
int h,i,j;
scanf("%d",&h);
for(i=1;i<=(h+1)/2){
    for(j=1;j<=h+1-i){
        if(i>j)printf(" ");
        else printf("*");}
        printf("\n");}
        for(i=1;i<=(h-1)/2){
            for(j=1;j<=5+i;j++){
                if(j<5-i)
                prinf(" ");
                else printf("*"); }
            printf("\n"); }
	return 0; }