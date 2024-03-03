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
    for(i=1;i<h;i++) {
       if(i<=(h+1)/2)
        for(j=2;j<=i-1;j++) {
            printf(" "); }
    else
        for(j=2;j<=h-i-1;j++){
            printf(" "); }
        printf("*\n*"); }
	return 0; }