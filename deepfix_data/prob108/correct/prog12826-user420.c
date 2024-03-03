#include <stdio.h>
#include <stdlib.h>
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int h;
    scanf("%d",&h);
    int i,j;
    for(i=1;i<=h;i++) {
        printf("*");
        for(j=2;j<=min(h-i,i)-2;j++) {
            printf(" "); }
        printf("*\n"); }
	return 0; }