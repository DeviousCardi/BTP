#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,height;
    scanf("%d",&height);
    for(i=1; i<=height; i++) {
        if(i==1) {
                for(j=1; j<=2*height-1; j++) {
                 printf("*"); } }
        else {
            for(j=1; j<=2*height-1; j++) {
                       if(j==i||j==2*height-i) {
                              printf("*"); }
                       else {
                             printf("    "); } } }
        printf("\n"); }
	return 0; }