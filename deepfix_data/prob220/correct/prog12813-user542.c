#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h , k;
    scanf("%d",&h);
    for(i=1;i<=h;i++) {
        for(j=(h-i);j>=0;j--) {
            printf(" "); }
        printf("*");
        if(i==1) {
          printf("\n")  ;
          continue; }
        if(i==h) {
            for(j=1;j<=(2*h-2);j++) {
                printf("*"); }
            break; }
        for(k=0;k<=(2*i-4);k++) {
            printf(" "); }
        printf("*");
        printf("\n"); }
	return 0; }