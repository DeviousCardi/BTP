#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,k,j;
	scanf("%d",&h);
    for(i=0;i<2*h;i++) {
        for(j=i;j<h;j++) {
            printf(" "); }
        for(k=h-i;k<h;k++) {
            printf("*"); }
        printf("\n"); }
    for(i=0;i<2*h;i++) {
        for(j=i;j<h;j++) {
            printf("*"); }
        for(k=h-i;k<h;k++) {
            printf(" "); }
        printf("\n"); }
	      return 0; }