#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a<b)
    return b;
    else
    rerurn a; }
int main() {
    int h;
    scanf("%d",&h);
    int i,j;
    for(i=1,i<=h,i++) {
        printf("*");
        for(j=2;j<=max(h-i,i)-2;j++) {
            printf(" "); }
        printf("*"); }
	return 0; }